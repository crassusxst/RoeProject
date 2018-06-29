//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IMVastNodeBaseParser.h"

@class IMMoatVerification, NSMutableString, NSString;

@interface IMMoatVerificationParser : IMVastNodeBaseParser
{
    _Bool _isViewableImpressionOccurred;
    NSMutableString *_moatViewableImpression;
    NSString *_cuurentElement;
    IMMoatVerification *_moatVerification;
}

+ (id)parserElementName;
- (void).cxx_destruct;
- (id)createParserForElement:(id)arg1 attributes:(id)arg2;
@property(retain, nonatomic) NSString *cuurentElement; // @synthesize cuurentElement=_cuurentElement;
- (_Bool)endParsingForElement:(id)arg1 value:(id)arg2;
- (void)foundCDATA:(id)arg1;
@property(nonatomic) _Bool isViewableImpressionOccurred; // @synthesize isViewableImpressionOccurred=_isViewableImpressionOccurred;
@property(retain, nonatomic) IMMoatVerification *moatVerification; // @synthesize moatVerification=_moatVerification;
@property(retain, nonatomic) NSMutableString *moatViewableImpression; // @synthesize moatViewableImpression=_moatViewableImpression;

@end
