# Phys 2200: Computational physics - HW06 Caesar decryption
## Objectives
The program aims at decrypting the following caesar encoded message:
> Libi imycibqwvm ycwbkcvycm ntcmvbma ycivbqbibma qvdwtdmvbm, ntcfqwvma qvdmvqzm: mb dqkm dmzai

## C program
The code actually holds in a single file [caesar.c](./caesar.c) composed of two functions.
### `caesar(int key,char message[]) `
This function is the core of the program, for a given key and message, it browses each character of the message and replace it by its caesar encoding.
This script is case sensitive: it treats separately upper and lower case characters, as the caesar encryption is a process that loops at the Z-A (resp. z-a) transition.
Thus upper (resp. lower) case decryption is looped with 'A' (resp. 'a') as a starting point.
Other characters, such as ',' or ':' in our sample, are ignored and left as they are.

The function does not return anything but prints the modified message.

### `main(void)`
This function actually calls the `caesar()` function for every possible key (0-25) and prints the key used.
It uses the defined constant for `latin_message` as an argument.

## Output 
As the program browse through the possible keys, we obtain a whole collection of candidates:
>0: Libi imycibqwvm ycwbkcvycm ntcmvbma ycivbqbibma qvdwtdmvbm, ntcfqwvma qvdmvqzm: mb dqkm dmzai <br />
>1: Mjcj jnzdjcrxwn zdxcldwzdn oudnwcnb zdjwcrcjcnb rwexuenwcn, oudgrxwnb rwenwran: nc erln enabj <br />
>2: Nkdk koaekdsyxo aeydmexaeo pveoxdoc aekxdsdkdoc sxfyvfoxdo, pvehsyxoc sxfoxsbo: od fsmo fobck <br />
>3: Olel lpbfletzyp bfzenfybfp qwfpyepd bflyetelepd tygzwgpyep, qwfitzypd tygpytcp: pe gtnp gpcdl <br />
>4: Pmfm mqcgmfuazq cgafogzcgq rxgqzfqe cgmzfufmfqe uzhaxhqzfq, rxgjuazqe uzhqzudq: qf huoq hqdem <br />
>5: Qngn nrdhngvbar dhbgphadhr syhragrf dhnagvgngrf vaibyiragr, syhkvbarf vairaver: rg ivpr irefn <br />
>6: Roho oseiohwcbs eichqibeis tzisbhsg eiobhwhohsg wbjczjsbhs, tzilwcbsg wbjsbwfs: sh jwqs jsfgo <br />
>7: Spip ptfjpixdct fjdirjcfjt uajtcith fjpcixipith xckdaktcit, uajmxdcth xcktcxgt: ti kxrt ktghp <br />
>8: Tqjq qugkqjyedu gkejskdgku vbkudjui gkqdjyjqjui ydlebludju, vbknyedui ydludyhu: uj lysu luhiq <br />
>9: Urkr rvhlrkzfev hlfktlehlv wclvekvj hlrekzkrkvj zemfcmvekv, wclozfevj zemveziv: vk mztv mvijr <br />
>10: Vsls swimslagfw imglumfimw xdmwflwk imsflalslwk afngdnwflw, xdmpagfwk afnwfajw: wl nauw nwjks <br />
>11: Wtmt txjntmbhgx jnhmvngjnx yenxgmxl jntgmbmtmxl bgoheoxgmx, yenqbhgxl bgoxgbkx: xm obvx oxklt <br />
>12: Xunu uykouncihy koinwohkoy zfoyhnym kouhncnunym chpifpyhny, zforcihym chpyhcly: yn pcwy pylmu <br />
>13: Yvov vzlpvodjiz lpjoxpilpz agpziozn lpviodovozn diqjgqzioz, agpsdjizn diqzidmz: zo qdxz qzmnv <br />
>14: Zwpw wamqwpekja mqkpyqjmqa bhqajpao mqwjpepwpao ejrkhrajpa, bhqtekjao ejrajena: ap reya ranow <br />
>15: Axqx xbnrxqflkb nrlqzrknrb cirbkqbp nrxkqfqxqbp fkslisbkqb, ciruflkbp fksbkfob: bq sfzb sbopx <br />
>16: Byry ycosyrgmlc osmraslosc djsclrcq osylrgryrcq gltmjtclrc, djsvgmlcq gltclgpc: cr tgac tcpqy <br />
>17: Czsz zdptzshnmd ptnsbtmptd ektdmsdr ptzmshszsdr hmunkudmsd, ektwhnmdr hmudmhqd: ds uhbd udqrz <br />
>**18: Data aequatione quotcunque fluentes quantitates involvente, fluxiones invenire: et vice versa** <br />
>19: Ebub bfrvbujpof rvpudvorvf gmvfouft rvboujubuft jowpmwfouf, gmvyjpoft jowfojsf: fu wjdf wfstb <br />
>20: Fcvc cgswcvkqpg swqvewpswg hnwgpvgu swcpvkvcvgu kpxqnxgpvg, hnwzkqpgu kpxgpktg: gv xkeg xgtuc <br />
>21: Gdwd dhtxdwlrqh txrwfxqtxh ioxhqwhv txdqwlwdwhv lqyroyhqwh, ioxalrqhv lqyhqluh: hw ylfh yhuvd <br />
>22: Hexe eiuyexmsri uysxgyruyi jpyirxiw uyerxmxexiw mrzspzirxi, jpybmsriw mrzirmvi: ix zmgi zivwe <br />
>23: Ifyf fjvzfyntsj vztyhzsvzj kqzjsyjx vzfsynyfyjx nsatqajsyj, kqzcntsjx nsajsnwj: jy anhj ajwxf <br />
>24: Jgzg gkwagzoutk wauziatwak lraktzky wagtzozgzky otburbktzk, lradoutky otbktoxk: kz boik bkxyg <br />
>25: Khah hlxbhapvul xbvajbuxbl msblualz xbhuapahalz pucvsclual, msbepvulz puclupyl: la cpjl clyzh <br />

### Result
The only message that makes sense among those proposed in the output in the following for the caesar key **18**.
> Data aequatione quotcunque fluentes quantitates involvente, fluxiones invenire: et vice versa

A [Google search](https://www.google.com/search?q=Data+aequatione+quotcunque+fluentes+quantitates+involvente%2C+fluxiones+invenire%3A+et+vice+versa&ie=utf-8&oe=utf-8&aq=t&rls=org.mozilla:fr:official&client=firefox-a&channel=s)
of the above quote reveals that it is attributed to **Isaac Newton**.
