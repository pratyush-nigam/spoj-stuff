def tournament_bracket():
	depth = input()
        num_players = 2**depth
        a = []
        for i in range(0,num_players):
                a.append(i+1)
        match_list = []
        for i in range(0,num_players/2):
                b = []
                b.append(a[i])
                b.append(a[num_players-i-1])
                match_list.append(b)
        print match_list
        n = num_players/2;
        while n != 1 :
                m_list = []
                for i in range(0, n/2):
                        b = []
                        b.append(match_list[i])
                        b.append(match_list[n-i-1])
                        m_list.append(b)
                match_list = m_list
                print match_list
                n = n/2
        return
tournament_bracket()
