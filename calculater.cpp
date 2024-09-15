#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
    string s, sa;
    cout << "\n\n\n    ----->  Welcome to our calculater  <-----" << endl
         << "----->  Write source-code of Calculator in C++ by Aman Taycon <-----" << endl
         << "--x-----x-----x-----x-----x-----x-----x-----x----x--\n\n\n"
         << "    Proform any arithmetical operation( / , * , + , - )" << endl
         << "    If you want to exit type 'z'" << endl
         << "    Type 'clear' for remove previous data" << endl
         << "--x-----x-----x-----x-----x-----x-----x-----x----x--\n\n\n";
    cout << ")-->";

    while (1)
    {
        try
        {
            getline(cin, s);
            sa.append(s);
            if (s == "clear")
            {
                sa.clear();
                cout << ")-->";
                continue;
            }

            else if (s == "z")
            {
                exit(0);
            }
            else
            {
                s.clear();
            }
            for (int i = 0; i < (sa.length()); i++)
            {
                int k = -1;
                int cou[2];
                for (int j = 0; j < (sa.length()); j++)
                {
                    if (sa.at(j) == '(' || sa.at(j) == '{' || sa.at(j) == '[')
                    {
                        k = j;
                        cou[0] = j;
                    }
                }
                for (; k < sa.length() && k != -1; k++)
                {
                    if (sa.at(k) == ')' || sa.at(k) == '}' || sa.at(k) == ']')
                    {
                        cou[1] = k;
                        i = 0;
                        break;
                    }
                }
                if (k != -1)
                {
                    s = sa.substr(cou[0] + 1, (cou[1] - cou[0]) - 1);
                    sa.erase(cou[0], (cou[1] - cou[0]) + 1);
                }
                else
                {
                    s = sa;
                    sa.clear();
                    cou[0] = 0;
                }
                for (int j = 0; j < (s.length()); j++)
                {
                    float num[2];
                    int del[2], i, k;
                    if (s.at(j) == '/')
                    {
                        {
                            k = j - 1;
                            for (int l = 0; (k != -1) && (s.at(k) != '*') && (s.at(k) != '/'); k--)
                            {
                                if (s.at(k) != ' ')
                                {
                                    l = 1;
                                }
                                i = k;
                                if ((s.at(k) == ' ') && (l == 1))
                                {
                                    break;
                                }
                                if ((s.at(k) == '+') || (s.at(k) == '-'))
                                {
                                    break;
                                }
                            }
                            del[0] = i;
                            num[0] = stof(s.substr(i, (j - i)));
                        }
                        {
                            k = j + 1;
                            for (int a = 0; k < (s.length()) && (s.at(k) != '*') && (s.at(k) != '/'); k++)
                            {
                                if (s.at(k) != ' ')
                                {
                                    if ((a != 0) && ((s.at(k) == '-') || (s.at(k) == '+')))
                                    {
                                        break;
                                    }
                                    a++;
                                }
                                i = k;
                                del[1] = i;
                            }

                            num[1] = stof(s.substr(j + 1, i - j));
                        }
                        float sum = num[0] / num[1];
                        s.erase(del[0], (del[1] - del[0]) + 1);
                        s.insert(del[0], " ");
                        s.insert(del[0], to_string(sum));
                        s.insert(del[0], " ");
                        j = 0;
                    }
                }
                for (int j = 0; j < (s.length()); j++)
                {
                    float num[2];
                    int del[2], i, k;
                    if (s.at(j) == '*')
                    {
                        {
                            k = j - 1;
                            for (int l = 0; (k != -1) && (s.at(k) != '*') && (s.at(k) != '/'); k--)
                            {
                                if (s.at(k) != ' ')
                                {
                                    l = 1;
                                }
                                i = k;
                                if ((s.at(k) == ' ') && (l == 1))
                                {
                                    break;
                                }
                                if ((s.at(k) == '+') || (s.at(k) == '-'))
                                {
                                    break;
                                }
                            }
                            del[0] = i;
                            num[0] = stof(s.substr(i, (j - i)));
                        }
                        {
                            k = j + 1;
                            for (int a = 0; k < (s.length()) && (s.at(k) != '*') && (s.at(k) != '/'); k++)
                            {
                                if (s.at(k) != ' ')
                                {
                                    if ((a != 0) && ((s.at(k) == '-') || (s.at(k) == '+')))
                                    {
                                        break;
                                    }
                                    a++;
                                }
                                i = k;
                                del[1] = i;
                            }

                            num[1] = stof(s.substr(j + 1, i - j));
                        }
                        float sum = num[0] * num[1];
                        s.erase(del[0], (del[1] - del[0]) + 1);
                        s.insert(del[0], " ");
                        s.insert(del[0], to_string(sum));
                        s.insert(del[0], " ");
                        j = 0;
                    }
                }
                for (int j = 0; j < (s.length()); j++)
                {
                    float num[2];
                    int del[2], i, k;
                    if (s.at(j) == '+')
                    {
                        {
                            k = j - 1;
                            for (int l = 0; (k != -1) && (s.at(k) != '*') && (s.at(k) != '/'); k--)
                            {
                                if (s.at(k) != ' ')
                                {
                                    l = 1;
                                }
                                i = k;
                                if ((s.at(k) == ' ') && (l == 1))
                                {
                                    break;
                                }
                                if ((s.at(k) == '+') || (s.at(k) == '-'))
                                {
                                    break;
                                }
                            }
                            del[0] = i;
                            num[0] = stof(s.substr(i, (j - i)));
                        }
                        {
                            k = j + 1;
                            for (int a = 0; k < (s.length()) && (s.at(k) != '*') && (s.at(k) != '/'); k++)
                            {
                                if (s.at(k) != ' ')
                                {
                                    if ((a != 0) && ((s.at(k) == '-') || (s.at(k) == '+')))
                                    {
                                        break;
                                    }
                                    a++;
                                }
                                i = k;
                                del[1] = i;
                            }

                            num[1] = stof(s.substr(j + 1, i - j));
                        }
                        float sum = num[0] + num[1];
                        s.erase(del[0], (del[1] - del[0]) + 1);
                        s.insert(del[0], " ");
                        s.insert(del[0], to_string(sum));
                        s.insert(del[0], " ");
                        j = 0;
                    }
                }
                for (int j = 0, t = 0; j < (s.length()); j++)
                {
                    float num[2];
                    int del[2], i, k;
                    if (s.at(j) != ' ')
                    {
                        if (t == 0 && s.at(j) == '-')
                        {
                            t = 1;
                            continue;
                        }

                        t = 1;
                    }
                    if (s.at(j) == '-')
                    {
                        {
                            k = j - 1;
                            for (int l = 0; (k != -1) && (s.at(k) != '*') && (s.at(k) != '/'); k--)
                            {
                                if (s.at(k) != ' ')
                                {
                                    l = 1;
                                }
                                i = k;
                                if ((s.at(k) == ' ') && (l == 1))
                                {
                                    break;
                                }
                                if ((s.at(k) == '+') || (s.at(k) == '-'))
                                {
                                    break;
                                }
                            }
                            del[0] = i;
                            num[0] = stof(s.substr(i, (j - i)));
                        }
                        {
                            k = j + 1;
                            for (int a = 0; k < (s.length()) && (s.at(k) != '*') && (s.at(k) != '/'); k++)
                            {
                                if (s.at(k) != ' ')
                                {
                                    if ((a != 0) && ((s.at(k) == '-') || (s.at(k) == '+')))
                                    {
                                        break;
                                    }
                                    a++;
                                }
                                i = k;
                                del[1] = i;
                            }

                            num[1] = stof(s.substr(j + 1, i - j));
                        }
                        float sum = num[0] - num[1];
                        s.erase(del[0], (del[1] - del[0]) + 1);
                        s.insert(del[0], " ");
                        s.insert(del[0], to_string(sum));
                        s.insert(del[0], " ");
                        j = 0;
                        t = 0;
                    }
                }
                sa.insert(cou[0], s);
                s.clear();
            }
            cout << ")-->" << sa;
        }
        catch (const std::exception &e)
        {
            // std::cerr << e.what() << '\n';
            cout << "    ------> Wrong Input <------ \n";
        }
    }

    return 0;
}