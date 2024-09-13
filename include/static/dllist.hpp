#include <cassert>
#include <iostream>
#define assertm(exp, msg) assert(((void)msg, exp))

template <typename E> class dllist {
  typedef struct node {
    struct node* prev;
    E val;
    struct node* next;
  } node_t;

private:
  node_t* head;
  int size;

public:
  dllist();
  ~dllist();
  void insert_front(E val);
  void insert_back(E val);
  void insert_item(E val, int index);
  E delete_front();
  E delete_back();
  E delete_item(int index);
  node_t* find(E val);
  void modify(E old_val, E new_val);
  bool empty();
  int get_size();
  void print_list();
  node_t* get_head();
};

template <typename E> inline dllist<E>::dllist() {
  head = NULL;
  size = 0;
}

template <typename E> inline dllist<E>::~dllist() {
  node_t* current = head;
  while (size != 0) {
    node_t* next = current->next;
    delete current;
    current = next;
    size -= 1;
  }
}

template <typename E> inline void dllist<E>::insert_front(E val) {
  node_t* new_node = new node_t;
  new_node->next = new_node->prev = new_node;
  new_node->val = val;
  if (head) {
    new_node->next = head;
    new_node->prev = head->prev;
    head->prev = new_node;
    new_node->prev->next = new_node;
  }
  head = new_node;
  size += 1;
}

template <typename E> inline void dllist<E>::insert_back(E val) {
  node_t* new_node = new node_t;
  new_node->next = new_node->prev = new_node;
  new_node->val = val;
  if (head) {
    new_node->next = head;
    new_node->prev = head->prev;
    head->prev->next = new_node;
    head->prev = new_node;
  } else {
    head = new_node;
  }
  size += 1;
}

template <typename E> inline void dllist<E>::insert_item(E val, int index) {
  if (index >= size) {
    this->insert_back(val);
    return;
  }
  node_t* new_node = new node_t;
  new_node->val = val;
  new_node->prev = new_node;
  new_node->next = new_node;

  node_t* p = head;
  while (index > 0) {
    p = p->next;
    index -= 1;
  }
  new_node->next = p;
  new_node->prev = p->prev;
  p->prev->next = new_node;
  p->prev = new_node;
  size += 1;
}

template <typename E> inline E dllist<E>::delete_front() {
  assert(empty() == false);
  E val = head->val;
  node_t* new_head = head->next;
  head->next->prev = head->prev;
  head->prev->next = head->next;
  delete head;
  size -= 1;
  if (size != 0)
    head = new_head;
  else
    head = nullptr;
  return val;
}

template <typename E> inline E dllist<E>::delete_back() {
  assert(empty() == false);
  E val = head->val;
  node_t* p = head->prev;
  head->prev = head->prev->prev;
  head->prev->next = head;
  delete p;
  size -= 1;
  return val;
}

template <typename E> inline E dllist<E>::delete_item(int index) {
  if (index >= size) {
    return this->delete_back();
  }
  node_t* p = head;
  for (int i = index; i > 0; i--) {
    p = p->next;
  }
  p->prev->next = p->next;
  p->next->prev = p->prev;
  E val = p->val;
  delete p;
  size -= 1;
  return val;
}

template <typename E> inline typename dllist<E>::node_t* dllist<E>::find(E val) {
  node_t* p = head;
  while (p != NULL) {
    if (p->val == val) {
      return p;
    }
    p = p->next;
  }
  return nullptr;
}

template <typename E> inline void dllist<E>::modify(E old_val, E new_val) {
  node_t* p = find(old_val);
  if (!p) p->val = new_val;
}

template <typename E> inline bool dllist<E>::empty() { return size == 0; }

template <typename E> inline int dllist<E>::get_size() { return size; }

template <typename E> inline void dllist<E>::print_list() {
  node_t* p = head;
  for (int i = 0; i < size; i++) {
    std::cout << p->val << " ";
    p = p->next;
  }
}

template <typename E> inline typename dllist<E>::node_t* dllist<E>::get_head() { return head; }
