// int Insert(Hashtable &ht, Hocsinh x) {
//     if (ht.n + 1 > 0.7 * ht.M) return 0;
//     int key = x.Maso % ht.M;
//     int i = 0;
//     while (ht.table[(key + i) % ht.M].Maso != 0)
//     {
//         i++;
//         if (i > ht.M) return 0;
//     }
//     ht.table[(key + i) % ht.M] = x;
//     ht.n++;
//     return 1;
// }
// int Search(Hashtable ht, int maso, int &nprob) {
//     nprob = 0;
//     int key = maso % ht.M;
//     while (nprob <= ht.M)
//     {
//         if (ht.table[(key + nprob * nprob) % ht.M].Maso == maso) return nprob + 1;
//         nprob++;
//     }
//     return -1;
// }
// int Delete(Hashtable &ht, int maso, int &nprob) {
//     nprob = 0;
//     int key = maso % ht.M;
//     while (nprob <= ht.M)
//     {
//         if (ht.table[(key + nprob * nprob) % ht.M].Maso == maso)
//         {
//             ht.table[(key + nprob * nprob) % ht.M].Maso = DELETE;
//             ht.n--;
//             return nprob + 1;
//         }
//         nprob++;
//     }
//     return 0;
// }


// int Insert(Hashtable &ht, Hocsinh x) {
//     if (ht.n + 1 > LOAD * ht.M) return 0;
//     int key = Hash(ht, x.Maso);
//     AddTail(ht.table[key], x);
//     ht.n++;
//     return 1;
// }
// int key = Hash(ht, maso);
//     Node *temp = ht.table[key].head;
//     while (temp)
//     {
//         if (temp->data.Maso == maso) return temp;
//         temp = temp->next;
//     }
//     return temp;
// }
// int Delete(Hashtable &ht, int maso) {
//     int key = Hash(ht, maso);
//     Node *temp = ht.table[key].head;
//     if (temp == NULL) return 0;
//     if (temp->data.Maso == maso)
//     {
//         int check = RemoveHead(ht.table[key]);
//         if (check) ht.n--;
//         return check;
//     }
//     while (temp->next)
//     {
//         if (temp->next->data.Maso == maso) break;
//         temp = temp->next;
//     }
//     if (temp->next == NULL) return 0;
//     int check = RemoveAfter(ht.table[key], temp);
//     if (check) ht.n--;
//     return check;
// }