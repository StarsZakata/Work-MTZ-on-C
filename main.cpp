#include <iostream>
#include <vector>
#include "matplotlib-cpp/matplotlibcpp.h"
#include <LN.h>
#include <MySVSB.h>
#include <MMXU.h>
#include <PTOC.h>
#include <CSWI.h>
#include <XCBR.h>
#include <MSQI.h>
#include <RDIR.h>

namespace plt = matplotlibcpp;
using namespace std;

int MTZ();

vector<LN*> logicalN;

/* BeginLine
     * PhA80.cfg
     * PhAB80.cfg
     * EndLine
     * PhABC80.cfg
     * PhB80.cfg
     */
const string Comtrade="PhA80.cfg";

///<pwd команда в Linux для нахождения пути документа
int main() {
    /** Parser Comtrade*/
    MySVSB svsb;
    logicalN.push_back(&svsb);
    svsb.readComtrade("/home/sergey/Документы/DATA/CLion/Comtrade/BeginLine/" + Comtrade);

    /** Filtr Furie*/
    MMXU mmxu;
    logicalN.push_back(&mmxu);
    mmxu.setInstIa(&svsb.getIa());
    mmxu.setInstIb(&svsb.getIb());
    mmxu.setInstIc(&svsb.getIc());

    /** Comparison*/
    PTOC ptoc;
    logicalN.push_back(&ptoc);
    ptoc.setA(&mmxu.getA());
    ptoc.getStrVal().getSetVal().setvalue((float) 1500);
    ptoc.getOpDITmms().getSetVal().setvalue(200);

    /** Statuc Eqiment*/
    CSWI cswi;
    logicalN.push_back(&cswi);
    cswi.setOpOpn(&ptoc.getOp());
    cswi.getPos().getCtIVal().setvalue(true);
    cswi.getPos().getStVal().setvalue(2);

    /** Breaker Eqiment*/
    XCBR xcbr;
    logicalN.push_back(&xcbr);
    xcbr.setPos(&cswi.getPos());

    /** Process LogicalNodes*/
    while (svsb.getEndLine()) {
        for (int i = 0; i < logicalN.size(); i++) {
            (*logicalN[i]).process();
        }
    }


    /** Matplotlibcpp*/
    if (svsb.getEndLine() == false) {
        plt::suptitle(Comtrade+" Measurements");
        plt::subplot(7, 1, 1);
        plt::ylabel("Ia[kA]");
        plt::plot(svsb.GrafIa,"y");
        plt::subplot(7, 1, 2);
        plt::ylabel("Ib[kA]");
        plt::plot(svsb.GrafIb,"g");
        plt::subplot(7, 1, 3);
        plt::ylabel("Ic[kA]");
        plt::plot(svsb.GrafIc,"r");
        plt::subplot(7, 1, 4);
        plt::ylabel("FuriaIa[kA]");
        plt::plot(mmxu.GrafAFuria);
        plt::plot(ptoc.GrafUstka);
        plt::subplot(7, 1, 5);
        plt::ylabel("Str");
        plt::plot(ptoc.GrafSrabativania);
        plt::subplot(7, 1, 6);
        plt::ylabel("Pos");
        plt::plot(cswi.GrafPos);
        plt::subplot(7, 1, 7);
        plt::ylabel("Breaker");
        plt::plot(xcbr.GrafPosBreaker);
        plt::xlabel("Точки");
        plt::grid(true);
        plt::show();
    }

    return 0;
}

/* TZNP
 * KZ1.cfg
 * ...
 * KZ7.cfg
 */

int MTZ(){
    /* BeginLine
     * PhA80.cfg
     * PhAB80.cfg
     * EndLine
     * PhABC80.cfg
     * PhB80.cfg
     */
    const string Comtrade="PhA80.cfg";

    /** Parser Comtrade*/
    MySVSB svsb;
    logicalN.push_back(&svsb);
    svsb.readComtrade("/home/sergey/Документы/DATA/CLion/Comtrade/BeginLine/" + Comtrade);

    /** Filtr Furie*/
    MMXU mmxu;
    logicalN.push_back(&mmxu);
    mmxu.setInstIa(&svsb.getIa());
    //mmxu.setInstIb(&svsb.getIb());
    //mmxu.setInstIc(&svsb.getIc());

    /** Comparison*/
    PTOC ptoc;
    logicalN.push_back(&ptoc);
    ptoc.setA(&mmxu.getA());
    ptoc.getStrVal().getSetVal().setvalue((float) 1500);
    ptoc.getOpDITmms().getSetVal().setvalue(200);

    /** Statuc Eqiment*/
    CSWI cswi;
    logicalN.push_back(&cswi);
    cswi.setOpOpn(&ptoc.getOp());
    cswi.getPos().getCtIVal().setvalue(true);
    cswi.getPos().getStVal().setvalue(2);

    /** Breaker Eqiment*/
    XCBR xcbr;
    logicalN.push_back(&xcbr);
    xcbr.setPos(&cswi.getPos());

    /** Process LogicalNodes*/
    while (svsb.getEndLine()) {
        for (int i = 0; i < logicalN.size(); i++) {
            (*logicalN[i]).process();
        }
    }


    /** Matplotlibcpp*/
    if (svsb.getEndLine() == false) {
        plt::suptitle(Comtrade+" Measurements");
        plt::subplot(7, 1, 1);
        plt::ylabel("Ia[kA]");
        plt::plot(svsb.GrafIa,"y");
        plt::subplot(7, 1, 2);
        plt::ylabel("Ib[kA]");
        plt::plot(svsb.GrafIb,"g");
        plt::subplot(7, 1, 3);
        plt::ylabel("Ic[kA]");
        plt::plot(svsb.GrafIc,"r");
        plt::subplot(7, 1, 4);
        plt::ylabel("FuriaIa[kA]");
        plt::plot(mmxu.GrafAFuria);
        plt::plot(ptoc.GrafUstka);
        plt::subplot(7, 1, 5);
        plt::ylabel("Str");
        plt::plot(ptoc.GrafSrabativania);
        plt::subplot(7, 1, 6);
        plt::ylabel("Pos");
        plt::plot(cswi.GrafPos);
        plt::subplot(7, 1, 7);
        plt::ylabel("Breaker");
        plt::plot(xcbr.GrafPosBreaker);
        plt::xlabel("Точки");
        plt::grid(true);
        plt::show();
    }

    return 0;

}

int TZNP(){
    /* TZNP
     * KZ1.cfg
     * ...
     * KZ7.cfg
     */
    const string Comtrade="KZ1.cfg";
    /** Parser Comtrade*/
    MySVSB svsb;
    logicalN.push_back(&svsb);
    svsb.readComtrade("/home/sergey/Документы/DATA/CLion/Comtrade/TZNP/" + Comtrade);

    /** Filtr Furie*/
    MMXU mmxu;
    logicalN.push_back(&mmxu);

    mmxu.setInstUa(&svsb.getUa());
    mmxu.setInstUb(&svsb.getUb());
    mmxu.setInstUc(&svsb.getUc());

    mmxu.setInstIa(&svsb.getIa());
    mmxu.setInstIb(&svsb.getIb());
    mmxu.setInstIc(&svsb.getIc());


    /** Calculating Sequences*/
    MSQI msqi;
    logicalN.push_back(&msqi);
    msqi.setA(&mmxu.getA());

    while (svsb.getEndLine()) {
        for (int i = 0; i < logicalN.size(); i++) {
            (*logicalN[i]).process();
        }
    }


    if (svsb.getEndLine() == false) {
        plt::suptitle(Comtrade+" Measurements");

        plt::subplot(7, 1, 1);
        plt::ylabel("Ia[kA]");
        plt::plot(svsb.GrafIa,"y");

        plt::subplot(7, 1, 2);
        plt::ylabel("Ib[kA]");
        plt::plot(svsb.GrafIb,"g");

        plt::subplot(7, 1, 3);
        plt::ylabel("Ic[kA]");
        plt::plot(svsb.GrafIc,"r");

        //plt::subplot(7, 1, 4);
        //plt::ylabel("C1");
        //plt::plot(msqi.GrafC1);

        //plt::subplot(7, 1, 5);
        //plt::ylabel("C1");
        //plt::plot(msqi.GrafC2);

        plt::subplot(7, 1, 4);
        plt::ylabel("C3");
        plt::plot(msqi.GrafC3);


        plt::grid(true);
        plt::show();
    }













    /**Direction*/
    //RDIR rdir;
    //logicalN.push_back(&rdir);





    /** Comparison*/
    //PTOC ptoc;
    //logicalN.push_back(&ptoc);
    //ptoc.setA(&mmxu.getA());
    //ptoc.getStrVal().getSetVal().setvalue((float) 1500);
    //ptoc.getOpDITmms().getSetVal().setvalue(200);




    /** Statuc Eqiment*/
    //CSWI cswi;
    //logicalN.push_back(&cswi);
    //cswi.setOpOpn(&ptoc.getOp());
    //cswi.getPos().getCtIVal().setvalue(true);
    //cswi.getPos().getStVal().setvalue(2);

    /** Breaker Eqiment*/
    //XCBR xcbr;
    //logicalN.push_back(&xcbr);
    //xcbr.setPos(&cswi.getPos());

    while (svsb.getEndLine()) {
        for (int i = 0; i < logicalN.size(); i++) {
            (*logicalN[i]).process();
        }
    }

    /** Matplotlibcpp*/
    if (svsb.getEndLine() == false) {
        /*
        plt::suptitle(Comtrade+" Measurements");
        plt::subplot(7, 1, 1);
        plt::ylabel("Ia[kA]");
        plt::plot(svsb.GrafIa,"y");
        plt::subplot(7, 1, 2);
        plt::ylabel("Ib[kA]");
        plt::plot(svsb.GrafIb,"g");
        plt::subplot(7, 1, 3);
        plt::ylabel("Ic[kA]");
        plt::plot(svsb.GrafIc,"r");
        plt::subplot(7, 1, 4);
        plt::ylabel("FuriaIa[kA]");
        plt::plot(mmxu.GrafAFuria);
        plt::plot(ptoc.GrafUstka);
        plt::subplot(7, 1, 5);
        plt::ylabel("Str");
        plt::plot(ptoc.GrafSrabativania);
        plt::subplot(7, 1, 6);
        plt::ylabel("Pos");
        plt::plot(cswi.GrafPos);
        plt::subplot(7, 1, 7);
        plt::ylabel("Breaker");
        plt::plot(xcbr.GrafPosBreaker);
        plt::grid(true);
        plt::show();
         */
    }
    cout << "End" << endl;
    return 0;
}


