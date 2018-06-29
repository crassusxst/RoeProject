//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSURLSessionDataDelegate.h"
#import "NSURLSessionDelegate.h"
#import "NSURLSessionTaskDelegate.h"

@class NSHTTPURLResponse, NSMutableData, NSMutableDictionary, NSMutableURLRequest, NSString, NSTimer, NSURLSession, NSURLSessionDataTask;

@interface MOBFHttpService : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate>
{
    _Bool _isCacheResponse;
    _Bool _autoFillRequestForm;
    double _timeout;
    NSMutableURLRequest *_request;
    NSURLSession *_session;
    NSURLSessionDataTask *_task;
    NSMutableData *_responseData;
    NSHTTPURLResponse *_response;
    NSMutableDictionary *_parameters;
    NSString *_boundaryString;
    MOBFHttpService *_selfReference;
    CDUnknownBlockType _resultHandler;
    CDUnknownBlockType _faultHandler;
    CDUnknownBlockType _uploadProgressHandler;
    CDUnknownBlockType _downloadProgressHandler;
    NSTimer *_timer;
    long long _contentLength;
}

+ (id)sendHttpRequestByURLString:(id)arg1 method:(id)arg2 parameters:(id)arg3 headers:(id)arg4 onResult:(CDUnknownBlockType)arg5 onFault:(CDUnknownBlockType)arg6 onUploadProgress:(CDUnknownBlockType)arg7;
+ (id)sendHttpRequestByURLString:(id)arg1 method:(id)arg2 parameters:(id)arg3 headers:(id)arg4 timeout:(double)arg5 onResult:(CDUnknownBlockType)arg6 onFault:(CDUnknownBlockType)arg7 onUploadProgress:(CDUnknownBlockType)arg8;
+ (id)sendHttpRequestByURLString:(id)arg1 method:(id)arg2 parameters:(id)arg3 headers:(id)arg4 timeout:(double)arg5 onResult:(CDUnknownBlockType)arg6 onFault:(CDUnknownBlockType)arg7 onUploadProgress:(CDUnknownBlockType)arg8 onDownloadProgress:(CDUnknownBlockType)arg9;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (void)_addTimeoutListener;
- (void)_removeTimeoutListener;
- (void)_timeoutHandler;
- (void)addFileParameter:(id)arg1 fileName:(id)arg2 mimeType:(id)arg3 transferEncoding:(id)arg4 forKey:(id)arg5;
- (void)addHeader:(id)arg1 value:(id)arg2;
- (void)addHeaders:(id)arg1;
- (void)addParameter:(id)arg1 forKey:(id)arg2;
- (void)addParameters:(id)arg1;
@property(nonatomic) _Bool autoFillRequestForm; // @synthesize autoFillRequestForm=_autoFillRequestForm;
@property(copy, nonatomic) NSString *boundaryString; // @synthesize boundaryString=_boundaryString;
- (void)cancelRequest;
@property(nonatomic) long long contentLength; // @synthesize contentLength=_contentLength;
- (void)dealloc;
@property(copy, nonatomic) CDUnknownBlockType downloadProgressHandler; // @synthesize downloadProgressHandler=_downloadProgressHandler;
@property(copy, nonatomic) CDUnknownBlockType faultHandler; // @synthesize faultHandler=_faultHandler;
- (void)genBoundaryString;
- (id)init;
- (id)initWithRequest:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)initWithURLString:(id)arg1;
@property(nonatomic) _Bool isCacheResponse; // @synthesize isCacheResponse=_isCacheResponse;
@property(copy, nonatomic) NSString *method;
- (id)multipartFormDataUsingEncoding:(unsigned long long)arg1;
@property(retain, nonatomic) NSMutableDictionary *parameters; // @synthesize parameters=_parameters;
- (id)parametersDataUsingEncoding:(unsigned long long)arg1;
- (id)parametersStringUsingEncoding:(unsigned long long)arg1;
- (void)prepareSendRequest;
@property(retain, nonatomic) NSMutableURLRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) NSHTTPURLResponse *response; // @synthesize response=_response;
@property(retain, nonatomic) NSMutableData *responseData; // @synthesize responseData=_responseData;
@property(copy, nonatomic) CDUnknownBlockType resultHandler; // @synthesize resultHandler=_resultHandler;
@property(retain, nonatomic) MOBFHttpService *selfReference; // @synthesize selfReference=_selfReference;
- (void)sendRequest;
- (void)sendRequestOnResult:(CDUnknownBlockType)arg1 onFault:(CDUnknownBlockType)arg2 onUploadProgress:(CDUnknownBlockType)arg3;
- (void)sendRequestOnResult:(CDUnknownBlockType)arg1 onFault:(CDUnknownBlockType)arg2 onUploadProgress:(CDUnknownBlockType)arg3 onDownloadProgress:(CDUnknownBlockType)arg4;
@property(retain, nonatomic) NSURLSession *session; // @synthesize session=_session;
- (void)setBody:(id)arg1;
@property(retain, nonatomic) NSURLSessionDataTask *task; // @synthesize task=_task;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(copy, nonatomic) CDUnknownBlockType uploadProgressHandler; // @synthesize uploadProgressHandler=_uploadProgressHandler;
- (void)setupDeleteParams;
- (void)setupGetParams;
- (void)setupPostParams;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

