//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IMVastNodeParser.h"

@class NSString;

@interface IMVastNodeBaseParser : NSObject <IMVastNodeParser>
{
}

+ (id)parserElementName;
- (id)createParserForElement:(id)arg1 attributes:(id)arg2;
- (void)endParser:(id)arg1;
- (_Bool)endParsingForElement:(id)arg1 value:(id)arg2;
- (void)foundCDATA:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

