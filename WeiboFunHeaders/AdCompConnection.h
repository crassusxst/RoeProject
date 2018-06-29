//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSXMLParserDelegate.h"

@class AdCompAdRequest, AdCompAdapter, AdCompContent, NSMutableArray, NSMutableData, NSMutableDictionary, NSMutableURLRequest, NSString, NSTimer, NSURLResponse, NSXMLParser;

@interface AdCompConnection : NSObject <NSXMLParserDelegate>
{
    NSXMLParser *adXMLParser;
    id <AdCompConnectionDelegate> delegate;
    AdCompContent *adContent;
    NSMutableArray *contentArr;
    AdCompAdRequest *adRequest;
    NSMutableData *httpData;
    NSMutableDictionary *httpHeader;
    int state;
    int connectionType;
    NSString *currentElementName;
    NSMutableArray *connections;
    NSString *conMethod;
    NSMutableURLRequest *conRequest;
    NSURLResponse *conResponse;
    int nLoadImage;
    _Bool tryUseCache;
    int failDisplayReqTimes;
    NSTimer *retryConTimer;
    AdCompAdapter *_adapter;
}

+ (id)connectionWithClickRequest:(id)arg1 delegate:(id)arg2;
+ (id)connectionWithDisplayRequest:(id)arg1 delegate:(id)arg2;
+ (id)connectionWithGetRequest:(id)arg1 adapter:(id)arg2 delegate:(id)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) AdCompContent *adContent; // @synthesize adContent;
@property(retain, nonatomic) AdCompAdRequest *adRequest; // @synthesize adRequest;
@property(retain, nonatomic) NSXMLParser *adXMLParser; // @synthesize adXMLParser;
@property(retain, nonatomic) AdCompAdapter *adapter; // @synthesize adapter=_adapter;
- (void)cancel;
- (void)cancelConnections;
- (void)clearRetryTimer;
@property(retain, nonatomic) NSString *conMethod; // @synthesize conMethod;
@property(retain, nonatomic) NSMutableURLRequest *conRequest; // @synthesize conRequest;
@property(retain, nonatomic) NSURLResponse *conResponse; // @synthesize conResponse;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (id)connection:(id)arg1 willCacheResponse:(id)arg2;
- (void)connection:(id)arg1 willSendRequest:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
@property(readonly) int connectionType; // @synthesize connectionType;
@property(retain) NSMutableArray *connections; // @synthesize connections;
@property(retain, nonatomic) NSMutableArray *contentArr; // @synthesize contentArr;
@property(retain, nonatomic) NSString *currentElementName; // @synthesize currentElementName;
- (void)dealloc;
@property(nonatomic) __weak id <AdCompConnectionDelegate> delegate; // @synthesize delegate;
- (double)differInHeaderDate:(id)arg1 cache:(id)arg2 exist:(_Bool *)arg3;
- (_Bool)fetchExternalImage:(_Bool)arg1;
- (_Bool)handleExternalImage;
- (void)handleFailDisplayOrClick;
- (_Bool)handleFinishGet;
- (void)handleParseEnd:(_Bool)arg1;
@property(retain, nonatomic) NSMutableData *httpData; // @synthesize httpData;
@property(retain, nonatomic) NSMutableDictionary *httpHeader; // @synthesize httpHeader;
- (id)initWithClickRequest:(id)arg1 delegate:(id)arg2;
- (id)initWithDisplayRequest:(id)arg1 delegate:(id)arg2;
- (id)initWithGetRequest:(id)arg1 adapter:(id)arg2 delegate:(id)arg3;
- (void)notifyReportCallBack;
- (void)notifyReportResponse;
- (void)notifyTooQuickRequestError;
- (void)parseAdBody;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)parser:(id)arg1 parseErrorOccurred:(id)arg2;
- (void)parserDidEndDocument:(id)arg1;
- (void)parserDidStartDocument:(id)arg1;
- (void)removeConnection:(id)arg1;
@property(retain) NSTimer *retryConTimer; // @synthesize retryConTimer;
- (void)startConnection:(id)arg1;
- (void)startOpenAPIAdRequest:(id)arg1;
- (void)startRetryConnection:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

