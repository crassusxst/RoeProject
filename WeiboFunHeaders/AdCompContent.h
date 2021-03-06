//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, NSURLRequest, UIImage;

@interface AdCompContent : NSObject
{
    int adPlatType;
    _Bool adWebLoaded;
    NSMutableDictionary *colorBG;
    NSString *adId;
    NSString *adInfo;
    NSString *adText;
    NSString *adSubText;
    NSString *adTitle;
    NSString *adBody;
    NSString *adBaseUrlStr;
    NSString *adShowType;
    NSString *adLinkType;
    NSString *adLinkURL;
    NSMutableArray *adImageItems;
    NSString *errorReportQuery;
    NSString *adAppId;
    NSString *adCopyrightStr;
    NSString *adBgImgURL;
    UIImage *adBgImg;
    NSString *adActImgURL;
    UIImage *adActImg;
    struct CGSize adRetSize;
    struct CGSize adInstlImageSize;
    int adActionType;
    int adParseError;
    NSString *adWebURL;
    NSString *hostURL;
    NSURLRequest *adWebRequest;
    NSString *adBgColor;
    NSString *adTextColor;
    NSString *clickArea;
    NSString *otherShowURL;
    int src;
    int nCurFrame;
    int severAgent;
    int severAgentAdvertiser;
    NSString *monSstring;
    NSString *monCstring;
    double adWidth;
    double adHeight;
    struct CGRect clickSize;
    struct CGRect spreadTextViewSize;
    int forceTime;
    int relayTime;
    double cacheTime;
    int spreadType;
    NSDictionary *extendShowUrl;
    NSArray *extendClickUrl;
    int spreadVat;
    int maxClickNum;
    NSString *clickPosition;
    struct CGRect spreadImgViewRect;
    NSDictionary *nativeDict;
    NSMutableArray *exchangeArr;
    int exchangeNum;
    int colorTheme;
    int adRenderBgColorType;
    int deformationMode;
    NSString *fallBack;
    NSString *deepLink;
    NSString *aBClickPosition;
    NSString *_adLogoURLStr;
    UIImage *_adLogoImg;
    NSString *_adIconUrlStr;
    UIImage *_adIconImg;
    struct CGPoint downPoint;
    struct CGPoint upPoint;
}

+ (void)load;
- (void).cxx_destruct;
- (id)MakeAdFillViewWithSize:(struct CGSize)arg1 withBgColor:(id)arg2 withTextColor:(id)arg3;
@property(retain, nonatomic) NSString *aBClickPosition; // @synthesize aBClickPosition;
@property(retain, nonatomic) UIImage *adActImg; // @synthesize adActImg;
@property(retain, nonatomic) NSString *adActImgURL; // @synthesize adActImgURL;
@property(nonatomic) int adActionType; // @synthesize adActionType;
@property(retain, nonatomic) NSString *adAppId; // @synthesize adAppId;
@property(retain, nonatomic) NSString *adBaseUrlStr; // @synthesize adBaseUrlStr;
@property(retain, nonatomic) NSString *adBgColor; // @synthesize adBgColor;
@property(retain, nonatomic) UIImage *adBgImg; // @synthesize adBgImg;
@property(retain, nonatomic) NSString *adBgImgURL; // @synthesize adBgImgURL;
@property(retain, nonatomic) NSString *adBody; // @synthesize adBody;
@property(retain, nonatomic) NSString *adCopyrightStr; // @synthesize adCopyrightStr;
@property(nonatomic) double adHeight; // @synthesize adHeight;
@property(retain, nonatomic) UIImage *adIconImg; // @synthesize adIconImg=_adIconImg;
@property(retain, nonatomic) NSString *adIconUrlStr; // @synthesize adIconUrlStr=_adIconUrlStr;
@property(retain, nonatomic) NSString *adId; // @synthesize adId;
@property(retain) NSMutableArray *adImageItems; // @synthesize adImageItems;
@property(retain, nonatomic) NSString *adInfo; // @synthesize adInfo;
@property(nonatomic) struct CGSize adInstlImageSize; // @synthesize adInstlImageSize;
@property(retain, nonatomic) NSString *adLinkType; // @synthesize adLinkType;
@property(retain, nonatomic) NSString *adLinkURL; // @synthesize adLinkURL;
@property(retain, nonatomic) UIImage *adLogoImg; // @synthesize adLogoImg=_adLogoImg;
@property(retain, nonatomic) NSString *adLogoURLStr; // @synthesize adLogoURLStr=_adLogoURLStr;
@property(nonatomic) int adParseError; // @synthesize adParseError;
@property(nonatomic) int adPlatType; // @synthesize adPlatType;
@property(nonatomic) int adRenderBgColorType; // @synthesize adRenderBgColorType;
@property(nonatomic) struct CGSize adRetSize; // @synthesize adRetSize;
@property(retain, nonatomic) NSString *adShowType; // @synthesize adShowType;
@property(retain, nonatomic) NSString *adSubText; // @synthesize adSubText;
@property(retain, nonatomic) NSString *adText; // @synthesize adText;
@property(retain, nonatomic) NSString *adTextColor; // @synthesize adTextColor;
@property(retain, nonatomic) NSString *adTitle; // @synthesize adTitle;
@property(nonatomic) _Bool adWebLoaded; // @synthesize adWebLoaded;
@property(retain, nonatomic) NSURLRequest *adWebRequest; // @synthesize adWebRequest;
@property(retain, nonatomic) NSString *adWebURL; // @synthesize adWebURL;
@property(nonatomic) double adWidth; // @synthesize adWidth;
- (void)addLogoLabelWithView:(id)arg1 adType:(int)arg2;
- (void)animExchangeAd:(id)arg1;
@property(nonatomic) double cacheTime; // @synthesize cacheTime;
- (id)changeToDataFromString:(id)arg1;
@property(retain, nonatomic) NSString *clickArea; // @synthesize clickArea;
@property(retain, nonatomic) NSString *clickPosition; // @synthesize clickPosition;
@property(nonatomic) struct CGRect clickSize; // @synthesize clickSize;
@property(retain, nonatomic) NSMutableDictionary *colorBG; // @synthesize colorBG;
- (void)colorScheme;
- (void)conversionClickSizeWith:(struct CGSize)arg1;
- (int)currentFrame;
- (void)dealloc;
@property(retain, nonatomic) NSString *deepLink; // @synthesize deepLink;
@property(nonatomic) int deformationMode; // @synthesize deformationMode;
@property(nonatomic) struct CGPoint downPoint; // @synthesize downPoint;
- (void)ensureImageItemsCount:(int)arg1;
@property(retain, nonatomic) NSString *errorReportQuery; // @synthesize errorReportQuery;
@property(retain, nonatomic) NSArray *extendClickUrl; // @synthesize extendClickUrl;
@property(retain, nonatomic) NSDictionary *extendShowUrl; // @synthesize extendShowUrl;
@property(retain, nonatomic) NSString *fallBack; // @synthesize fallBack;
- (int)fixImageShowType:(int)arg1 Item:(id)arg2;
@property(nonatomic) int forceTime; // @synthesize forceTime;
- (id)getAdImage:(int)arg1;
- (id)getAdImageItem:(int)arg1;
- (id)hexStringToColor:(id)arg1;
@property(retain, nonatomic) NSString *hostURL; // @synthesize hostURL;
- (id)init;
- (id)makeAdFillViewWithSize:(struct CGSize)arg1 withBgColor:(id)arg2 withTextColor:(id)arg3;
- (id)makeAdInstlViewWithSize:(struct CGSize)arg1 withBgColor:(id)arg2 withTextColor:(id)arg3 withWebDelegate:(id)arg4;
- (id)makeAdSpreadTextViewWithFrame:(struct CGRect)arg1;
- (id)makeAdSpreadViewWithSize:(struct CGSize)arg1;
- (id)makeAdSpreadViewWithSize:(struct CGSize)arg1 withWebDelegate:(id)arg2;
- (id)makeBGColorImageViewWithSize:(struct CGSize)arg1 withBgColor:(id)arg2;
- (id)makeImageViewWithSize:(struct CGSize)arg1 withBgColor:(id)arg2 withTextColor:(id)arg3 withWebDelegate:(id)arg4;
- (id)makeWebView:(int)arg1 webDelegate:(id)arg2;
@property(nonatomic) int maxClickNum; // @synthesize maxClickNum;
@property(retain, nonatomic) NSString *monCstring; // @synthesize monCstring;
@property(retain, nonatomic) NSString *monSstring; // @synthesize monSstring;
@property int nCurFrame; // @synthesize nCurFrame;
@property(retain, nonatomic) NSDictionary *nativeDict; // @synthesize nativeDict;
- (_Bool)needAnimDisplay;
- (_Bool)needFetchImage;
@property(retain, nonatomic) NSString *otherShowURL; // @synthesize otherShowURL;
@property(nonatomic) int relayTime; // @synthesize relayTime;
- (void)renderBackground:(struct CGContext *)arg1 WithSize:(struct CGSize)arg2 withBgColor:(id)arg3;
- (void)renderTextInContext:(struct CGContext *)arg1 Rect:(struct CGRect)arg2 TextColor:(id)arg3;
- (id)renderWithSize:(struct CGSize)arg1 withBgColor:(id)arg2 withTextColor:(id)arg3;
- (void)setAdImage:(int)arg1 Url:(id)arg2 Append:(_Bool)arg3;
@property(nonatomic) int severAgent; // @synthesize severAgent;
@property(nonatomic) int severAgentAdvertiser; // @synthesize severAgentAdvertiser;
@property(nonatomic) struct CGRect spreadImgViewRect; // @synthesize spreadImgViewRect;
@property(nonatomic) struct CGRect spreadTextViewSize; // @synthesize spreadTextViewSize;
@property(nonatomic) int spreadType; // @synthesize spreadType;
@property(nonatomic) int spreadVat; // @synthesize spreadVat;
@property(nonatomic) int src; // @synthesize src;
@property(nonatomic) struct CGPoint upPoint; // @synthesize upPoint;
- (void)tiaozhengsize:(id)arg1 imageSize:(struct CGSize)arg2 bgViewSize:(struct CGSize)arg3;
- (int)totalFrame;
- (id)uselessStringRange:(id)arg1;
- (struct CGSize)withTheProportion:(struct CGSize)arg1 withSize:(struct CGSize)arg2;

@end

