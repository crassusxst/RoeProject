//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, UIColor, UIImage;

__attribute__((visibility("hidden")))
@interface WFDataManager : NSObject
{
    _Bool _debugEnabled;
    _Bool _needsRefreshAfterNewPost;
    _Bool _iRateOnlyLatestVersion;
    _Bool _hasShownTips;
    _Bool _isVideoPlayerFullscreen;
    NSString *_ipQueryURL;
    NSString *_ipCountryRegex;
    long long _lastIndexInPhotoMode;
    double _refreshMinInterval;
    NSString *_commentDisabledMsg;
    NSArray *_userLevelIcons;
    unsigned long long _cacheFolderSize;
}

+ (id)sharedManager;
- (void).cxx_destruct;
@property(readonly, retain, nonatomic) UIImage *actionButtonBackgroundImage;
@property(nonatomic) _Bool addBlurEffectOnSensitivePictures;
@property(readonly, nonatomic) NSArray *adminUIDs;
- (id)albumListLastUpdatedTimeForType:(int)arg1;
@property(readonly, nonatomic) _Bool appPromoEnabled;
@property(readonly, nonatomic) unsigned long long appPromoInterval;
@property(readonly, nonatomic) unsigned long long appPromoMinUseDays;
@property(readonly, retain, nonatomic) UIColor *backgroundColor;
@property(readonly, retain, nonatomic) UIImage *barButtonBackgroundImage;
@property(readonly, retain, nonatomic) UIColor *barTintColor;
@property unsigned long long cacheFolderSize; // @synthesize cacheFolderSize=_cacheFolderSize;
@property(readonly, retain, nonatomic) UIImage *commentButtonBackgroundImage;
@property(copy, nonatomic) NSString *commentDisabledMsg; // @synthesize commentDisabledMsg=_commentDisabledMsg;
@property(readonly, nonatomic) unsigned long long commentPageSize;
@property(nonatomic) _Bool commentsEnabled;
@property(nonatomic) _Bool commentsHidden;
@property(readonly, nonatomic) NSString *customerServiceUID;
@property(readonly, nonatomic) double dataExpirationAge;
@property(readonly, nonatomic) unsigned long long daysUntilRatePrompt;
@property(nonatomic) _Bool debugEnabled; // @synthesize debugEnabled=_debugEnabled;
@property(copy, nonatomic) NSString *defaultDataServerURL;
@property(readonly, retain, nonatomic) UIImage *embedEditorBackgroundImage;
@property(readonly, nonatomic) long long favoriteAutoDownloadMax;
@property(readonly, nonatomic) double favoriteAutoSyncInterval;
@property(readonly, nonatomic) long long favoritePageSize;
@property(readonly, nonatomic) _Bool favoriteSyncEnabled;
@property(readonly, nonatomic) long long favoriteUploadBatchMax;
@property(readonly, copy, nonatomic) NSString *feedbackEmail;
@property(nonatomic) double fontSize;
@property(readonly, nonatomic) long long fontSizeIndex;
@property(nonatomic) _Bool girlsHidden;
@property(nonatomic) _Bool hasShownTips; // @synthesize hasShownTips=_hasShownTips;
@property(readonly, retain, nonatomic) UIColor *headerFooterBackgroundColor;
- (id)hotWeiboListLastUpdatedTime;
@property(readonly, nonatomic) NSString *iRateAlertMessage;
@property(readonly, nonatomic) NSString *iRateAlertTitle;
@property(readonly, nonatomic) NSString *iRateCancelButtonTitle;
@property(nonatomic) _Bool iRateOnlyLatestVersion; // @synthesize iRateOnlyLatestVersion=_iRateOnlyLatestVersion;
@property(readonly, nonatomic) NSString *iRateRateButtonTitle;
@property(readonly, nonatomic) NSString *iRateRemindButtonTitle;
@property(nonatomic) int imageLoadMode;
@property(readonly, nonatomic) _Bool imagePreloadEnabled;
@property(copy, nonatomic) NSString *imageRefererURL;
@property(nonatomic) int imageShowSize;
@property(readonly, retain, nonatomic) UIColor *imageViewBackgroundColor;
@property(readonly, retain, nonatomic) UIColor *imageViewProgressBarColor;
- (id)init;
@property(retain, nonatomic) NSString *ipCountryRegex; // @synthesize ipCountryRegex=_ipCountryRegex;
@property(retain, nonatomic) NSString *ipQueryURL; // @synthesize ipQueryURL=_ipQueryURL;
- (_Bool)isAppInReview;
@property(nonatomic) _Bool isVideoPlayerFullscreen; // @synthesize isVideoPlayerFullscreen=_isVideoPlayerFullscreen;
- (id)lastFavSyncTime;
@property(nonatomic) long long lastIndexInPhotoMode; // @synthesize lastIndexInPhotoMode=_lastIndexInPhotoMode;
- (id)lastLaunchTime;
- (id)lastPidForType:(int)arg1;
- (long long)lastPostTimestampForType:(int)arg1;
- (id)lastReadAlbumTimeForType:(int)arg1;
- (long long)lastReadCommentReplyIdForType:(int)arg1;
- (long long)lastReadPrivateMsgTimestamp;
- (long long)lastReadSysMsgTimestamp;
- (id)lastUpdatedTimeForType:(int)arg1 isOfficial:(_Bool)arg2;
@property(readonly, retain, nonatomic) UIColor *leftMenuBackgroundColor;
@property(readonly, retain, nonatomic) UIColor *leftMenuSelectedTextColor;
@property(readonly, nonatomic) _Bool loadThumbnails;
@property(readonly, retain, nonatomic) UIImage *mainCellBackgroundImage;
@property(readonly, retain, nonatomic) UIImage *mainCellSelectedBackgroundImage;
@property(readonly, nonatomic) unsigned long long maxContinuousLaunchDays;
- (id)minSafeDateForAlbums;
- (id)minSafeDateForType:(int)arg1;
@property(readonly, retain, nonatomic) UIImage *navigationBarBackgroundImage;
@property(nonatomic) _Bool needsRefreshAfterNewPost; // @synthesize needsRefreshAfterNewPost=_needsRefreshAfterNewPost;
@property(readonly, nonatomic) double newAlbumsCheckInterval;
- (id)newAlbumsLastCheckedTime;
@property(nonatomic) _Bool nightModeEnabled;
- (void)onlineConfigReceived:(id)arg1;
- (void)parseKeyOnlineParams:(id)arg1;
@property(readonly, nonatomic) unsigned long long pendingPostPageSize;
@property(readonly, nonatomic) _Bool picModeAdOn;
@property(nonatomic) _Bool playerAutoFullscreen;
@property(readonly, nonatomic) long long postControlMaxPosts;
@property(readonly, nonatomic) double postControlTimeSpan;
- (id)privateMsgLastUpdatedTime;
@property(readonly, retain, nonatomic) UIColor *quotedAuthorColor;
@property(readonly, retain, nonatomic) UIColor *quotedTextColor;
@property(nonatomic) double refreshMinInterval; // @synthesize refreshMinInterval=_refreshMinInterval;
@property(nonatomic) _Bool saveProgress;
@property(readonly, copy, nonatomic) NSString *searchCloseMsg;
@property(readonly, nonatomic) long long searchControlMaxSearches;
@property(readonly, nonatomic) double searchControlTimeSpan;
@property(readonly, retain, nonatomic) UIColor *segmentControlTintColor;
@property(readonly, nonatomic) double sessionExpirationAge;
- (void)setAlbumListLastUpdatedTime:(id)arg1 forType:(int)arg2;
- (void)setAppVersionInReview:(id)arg1;
- (void)setHotWeiboListLastUpdatedTime:(id)arg1;
- (void)setLastFavSyncTime:(id)arg1;
- (void)setLastPid:(id)arg1 forType:(int)arg2;
- (void)setLastPostTimestamp:(long long)arg1 forType:(int)arg2;
- (void)setLastReadAlbumTime:(id)arg1 forType:(int)arg2;
- (void)setLastReadCommentReplyId:(long long)arg1 forType:(int)arg2;
- (void)setLastReadPrivateMsgTimestamp:(long long)arg1;
- (void)setLastReadSysMsgTimestamp:(long long)arg1;
- (void)setLastUpdatedTime:(id)arg1 forType:(int)arg2 isOfficial:(_Bool)arg3;
- (void)setNewAlbumsLastCheckedTime:(id)arg1;
- (void)setPrivateMsgLastUpdatedTime:(id)arg1;
- (void)setSearchCloseMsg:(id)arg1;
@property(nonatomic) _Bool showHijackWebView;
@property(nonatomic) _Bool stopPlayerOnCellularNetwork;
- (void)setSysMsgLastUpdatedTime:(id)arg1;
- (void)setUgcCloseMsg:(id)arg1;
@property(nonatomic) _Bool ugcHidden;
@property(retain, nonatomic) NSArray *userLevelIcons; // @synthesize userLevelIcons=_userLevelIcons;
@property(readonly, copy, nonatomic) NSString *sinaPromoText;
@property(readonly, copy, nonatomic) NSString *slbCookieName;
- (id)sysMsgLastUpdatedTime;
@property(readonly, copy, nonatomic) NSString *tencentPromoText;
@property(readonly, retain, nonatomic) UIColor *textColor;
@property(readonly, nonatomic) double timeoutInterval;
@property(readonly, retain, nonatomic) UIColor *titleColor;
@property(readonly, copy, nonatomic) NSString *ugcCloseMsg;
@property(readonly, nonatomic) unsigned long long umengLogInterval;
@property(readonly, nonatomic) double unreadMsgUpdateInterval;
- (void)updateMaxContinuousLaunchDays;
@property(readonly, nonatomic) unsigned long long usesUntilRatePrompt;
@property(readonly, nonatomic) double videoLoadTimeout;
@property(readonly, nonatomic) _Bool videoPageAdOn;
@property(readonly, nonatomic) unsigned long long weiboPageSize1;
@property(readonly, nonatomic) unsigned long long weiboPageSize2;
@property(readonly, copy, nonatomic) NSString *weixinShareURL;

@end

