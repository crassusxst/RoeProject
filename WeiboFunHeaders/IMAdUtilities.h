//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IMAdUtilities : NSObject
{
}

+ (id)adsErrorToString:(int)arg1;
+ (void)appendTrackerParams:(id)arg1 toUrl:(id)arg2;
+ (struct CGRect)availableScreenRect;
+ (struct CGRect)availableScreenRectForView:(id)arg1;
+ (double)colorComponentFrom:(id)arg1 start:(unsigned long long)arg2 length:(unsigned long long)arg3;
+ (id)colorWithHexString:(id)arg1;
+ (id)createMuteButtonImageWithSize:(struct CGSize)arg1 WithMute:(_Bool)arg2;
+ (id)getDisplayMap;
+ (id)getEncodedDictionary:(id)arg1;
+ (int)getStatusBarHeight;
+ (struct CGContext *)newContextWithWidth:(float)arg1 andHeight:(float)arg2;
+ (unsigned int)random8DigitNum;
+ (id)replaceTimeStampMacroInUrl:(id)arg1 showTime:(unsigned long long)arg2 loadTime:(unsigned long long)arg3;
+ (id)rootLevelResponderForView:(id)arg1;
+ (struct CGSize)screenSize;
+ (id)statusFromErrorCode:(int)arg1 withDescription:(id)arg2;
+ (id)statusWithCode:(long long)arg1 withDescription:(id)arg2;
+ (id)topmostView:(id)arg1;
+ (id)topmostViewController;
+ (id)topmostViewController:(id)arg1;
+ (_Bool)trackerEventTypeValidation:(id)arg1 eventType:(id)arg2 forKey:(id)arg3;
+ (_Bool)urlValidation:(id)arg1 forKey:(id)arg2;

@end
