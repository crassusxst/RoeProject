//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IMOBFPlugin.h"

@class NSString, SSPTwitterSliceUpload;

@interface SSPTwitterProxy : NSObject <IMOBFPlugin>
{
    SSPTwitterSliceUpload *_sliceUpload;
}

- (void).cxx_destruct;
- (void)_registerTwitterUploadVideoMethod;
- (void)dealloc;
- (id)init;
- (void)load:(id)arg1;
- (void)registerMethod;
- (void)unload;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

