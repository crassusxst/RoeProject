//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IMJSONModel.h"

@class NSNumber, NSString;

@interface IMAdsConfigWebviewModeModel : IMJSONModel
{
    NSString *_webviewBackground;
    NSNumber *_webviewMode;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithWebviewMode:(id)arg1 andBackGroundColor:(id)arg2;
@property(retain, nonatomic) NSString *webviewBackground; // @synthesize webviewBackground=_webviewBackground;
@property(retain, nonatomic) NSNumber *webviewMode; // @synthesize webviewMode=_webviewMode;
- (_Bool)validate:(id *)arg1;

@end

