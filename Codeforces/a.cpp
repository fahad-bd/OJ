/**
  * Create: Saturday 2022-07-16-09.59.07 GMT+7
  * Title : A. Again Twenty Five!
  * Author:
*****/


#include <bits/stdc++.h>

using namespace std;

#ifndef   DEBUG
template <typename T>                           ostream& operator << (ostream& os, const stack                 <T>         &stack_)                  {os <<   "[";     int n = (int) stack_.size();      vector <T> archive (n);    stack <T>                              stackCopy_ (stack_);   for (int i=0; i<n; ++i) {archive[stackCopy_.size()-1]=stackCopy_.top();       stackCopy_.pop();}     if (!archive.empty())      {for (auto it=archive.begin(); it!=archive.end()-1; ++it)    {os <<*it <<", ";}     os <<archive.back();}     os <<" ";     return os;}
template <typename T>                           ostream& operator << (ostream& os, const queue                 <T>         &queue_)                  {os << "->[";     int n = (int) queue_.size();      vector <T> archive (n);    queue <T>                              queueCopy_ (queue_);   for (int i=0; i<n; ++i) {archive[queueCopy_.size()-1]=queueCopy_ .front();    queueCopy_.pop();}     if (!archive.empty())      {for (auto it=archive.begin(); it!=archive.end()-1; ++it)    {os <<*it <<", ";}     os <<archive.back();}     os <<" ";     return os;}
template <typename T>                           ostream& operator << (ostream& os, const priority_queue        <T,vector<T>,greater<T>>&Queue_)      {os <<   "[";     int n = (int) Queue_.size();      vector <T> archive (n);    priority_queue<T,vector<T>,greater<T>> QueueCopy_ (Queue_);   for (int i=0; i<n; ++i) {archive[QueueCopy_.size()-1]=QueueCopy_.top();       QueueCopy_.pop();}     if (!archive.empty())      {for (auto it=archive.begin(); it!=archive.end()-1; ++it)    {os <<*it <<", ";}     os <<archive.back();}     os <<" ";     return os;}
template <typename T>                           ostream& operator << (ostream& os, const priority_queue        <T>         &Queue_)                  {os <<   "[";     int n = (int) Queue_.size();      vector <T> archive (n);    priority_queue<T>                      QueueCopy_ (Queue_);   for (int i=0; i<n; ++i) {archive[QueueCopy_.size()-1]=QueueCopy_.top();       QueueCopy_.pop();}     if (!archive.empty())      {for (auto it=archive.begin(); it!=archive.end()-1; ++it)    {os <<*it <<", ";}     os <<archive.back();}     os <<" ";     return os;}
template <typename T>                           ostream& operator << (ostream& os, const vector                <T>         &vector_)                 {os <<   "[";     if (!vector_  .empty())           {for (auto it = vector_  .begin(), i=0; i< (int) vector_   .size()-1; ++i, ++it)         {os <<*it <<", ";}     os << * (vector_   .rbegin());}     os << "]";     return os;}
template <typename T>                           ostream& operator << (ostream& os, const deque                 <T>         &deque_)                  {os <<   "[";     if (!deque_   .empty())           {for (auto it = deque_   .begin(), i=0; i< (int) deque_    .size()-1; ++i, ++it)         {os <<*it <<", ";}     os << * (deque_    .rbegin());}     os << "]";     return os;}
template <typename T>                           ostream& operator << (ostream& os, const set                   <T>         &set_)                    {os <<   "[";     if (!set_     .empty())           {for (auto it = set_     .begin(), i=0; i< (int) set_      .size()-1; ++i, ++it)         {os <<*it <<", ";}     os << * (set_      .rbegin());}     os << "]";     return os;}
template <typename T>                           ostream& operator << (ostream& os, const multiset              <T>         &multiSet_)               {os <<   "[";     if (!multiSet_.empty())           {for (auto it = multiSet_.begin(), i=0; i< (int) multiSet_ .size()-1; ++i, ++it)         {os <<*it <<", ";}     os << * (multiSet_ .rbegin());}     os << "]";     return os;}
template <typename T1, typename T2>             ostream& operator << (ostream& os, const map                   <T1, T2>    &map_)                    {os <<   "[";     if (!map_     .empty())           {for (auto it = map_     .begin(), i=0; i< (int) map_      .size()-1; ++i, ++it)         {os <<*it <<", ";}     os << * (map_      .rbegin());}     os << "]";     return os;}
template <typename T1, typename T2>             ostream& operator << (ostream& os, const multimap              <T1, T2>    &multiMap_)               {os <<   "[";     if (!multiMap_.empty())           {for (auto it = multiMap_.begin(), i=0; i< (int) multiMap_ .size()-1; ++i, ++it)         {os <<*it <<", ";}     os << * (multiMap_ .rbegin());}     os << "]";     return os;}
template <typename T1, typename T2>             ostream& operator << (ostream& os, const pair                  <T1, T2>    &pair_)                   {os <<   "{";                                                                                                                                {os <<pair_.first;     os <<":";   os <<pair_.second;}     os << "}";     return os;}
template <typename T>                           void     quick_debug (ostream& os, const char *name,           const T     &value)                   {os <<"[DEBUG]"   << name <<" = " <<value <<endl;};
template <typename T1, typename... Args>        void     quick_debug (ostream& os, const char *name,           const T1    &value, Args&&... args)   {os <<"[DEBUG]";  while (*name != ',')    {os << *name++;}     os << " = " << value << endl;    quick_debug (os, name + 1, args...);};
#define  hien(...)                              quick_debug(cout, " " #__VA_ARGS__, __VA_ARGS__)
#define  endl                                   "\n"
#endif   //end DEBUG


int main() {
   ios_base::sync_with_stdio (0); cin.tie (0);


    vector<int> ar;
    ar.push_back(1);
    ar.push_back(2);
    ar.push_back(3);
    ar.push_back(4);
    ar.push_back(5);

    hien(ar);

    set<int>se;
    se.insert(1);
    se.insert(12);
    se.insert(13);

    hien(se);

    

   return 0;
}