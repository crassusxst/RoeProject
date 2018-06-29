//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IMPLCrashReportFormatter.h"

@interface IMPLCrashReportTextFormatter : NSObject <IMPLCrashReportFormatter>
{
    int _textFormat;
    unsigned long long _stringEncoding;
}

+ (id)formatStackFrame:(id)arg1 frameIndex:(unsigned long long)arg2 report:(id)arg3 lp64:(_Bool)arg4;
+ (id)stringValueForCrashReport:(id)arg1 withTextFormat:(int)arg2;
- (id)formatReport:(id)arg1 error:(id *)arg2;
- (id)initWithTextFormat:(int)arg1 stringEncoding:(unsigned long long)arg2;

@end

