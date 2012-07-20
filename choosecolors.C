/*
===============================
= a.succurro@gmail.com = 2011 =
===============================
a root macro to try color combinations for
overcrowded plots with easy histograms
*/

{

Color_t c2 = kOrange+1;
Color_t c1 = kRed+1;
Color_t c3 = kAzure+2;
Color_t c5 = kTeal+4;
Color_t c4 = kGreen-7;

TH1F h1 = TH1F("h1", "h1", 5, 0, 5);
TH1F h2 = TH1F("h2", "h2", 5, 0, 5);
TH1F h3 = TH1F("h3", "h3", 5, 0, 5);
TH1F h4 = TH1F("h4", "h4", 5, 0, 5);
TH1F h5 = TH1F("h5", "h5", 5, 0, 5);
TH1F h6 = TH1F("h6", "h6", 5, 0, 5);

h1->Fill(0.5);
h2->Fill(1.5);
h3->Fill(2.5);
h4->Fill(3.5);
h5->Fill(4.5);
h6->Fill(5.5);
h1->Fill(0.5);
h2->Fill(1.5);
h3->Fill(2.5);
h4->Fill(3.5);
h5->Fill(4.5);
h6->Fill(5.5);

h1->SetFillColor(c1);
h2->SetFillColor(c2);
h3->SetFillColor(c3);
h4->SetFillColor(c4);
h5->SetFillColor(c5);

h1->SetLineColor(c1);
h2->SetLineColor(c2);
h3->SetLineColor(c3);
h4->SetLineColor(c4);
h5->SetLineColor(c5);

h1->SetFillStyle(3002);
h2->SetFillStyle(3002);
h3->SetFillStyle(3002);
h4->SetFillStyle(3002);
h5->SetFillStyle(3002);

TH1F lh1 = TH1F("lh1", "lh1", 5, 0, 5);
TH1F lh2 = TH1F("lh2", "lh2", 5, 0, 5);
TH1F lh3 = TH1F("lh3", "lh3", 5, 0, 5);
TH1F lh4 = TH1F("lh4", "lh4", 5, 0, 5);
TH1F lh5 = TH1F("lh5", "lh5", 5, 0, 5);
lh1->SetLineColor(c1);
lh2->SetLineColor(c2);
lh3->SetLineColor(c3);
lh4->SetLineColor(c4);
lh5->SetLineColor(c5);
lh1->SetLineWidth(3);
lh2->SetLineWidth(3);
lh3->SetLineWidth(3);
lh4->SetLineWidth(3);
lh5->SetLineWidth(3);
lh1->SetLineStyle(2);
lh2->SetLineStyle(2);
lh3->SetLineStyle(2);
lh4->SetLineStyle(2);
lh5->SetLineStyle(2);
lh1->Fill(0.5);
lh2->Fill(1.5);
lh3->Fill(2.5);
lh4->Fill(3.5);
lh5->Fill(4.5);

TCanvas cc("cc","cc",600,600);

h1->Draw("hist");
h2->Draw("hist same");
h3->Draw("hist same");
h4->Draw("hist same");
h5->Draw("hist same");
lh1->Draw("hist same");
lh2->Draw("hist same");
lh3->Draw("hist same");
lh4->Draw("hist same");
lh5->Draw("hist same");

cc.SaveAs("contourVLQ.eps");

}

