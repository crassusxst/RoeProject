//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MDGLRendererDelegate.h"

@class MDDisplayStrategyManager, MDPluginManager, MDProjectionStrategyManager, NSString;

__attribute__((visibility("hidden")))
@interface MD360Renderer : NSObject <MDGLRendererDelegate>
{
    MDDisplayStrategyManager *_mDisplayStrategyManager;
    MDProjectionStrategyManager *_mProjectionStrategyManager;
    MDPluginManager *_mPluginManager;
}

+ (id)builder;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
@property(nonatomic) __weak MDDisplayStrategyManager *mDisplayStrategyManager; // @synthesize mDisplayStrategyManager=_mDisplayStrategyManager;
@property(nonatomic) __weak MDPluginManager *mPluginManager; // @synthesize mPluginManager=_mPluginManager;
@property(nonatomic) __weak MDProjectionStrategyManager *mProjectionStrategyManager; // @synthesize mProjectionStrategyManager=_mProjectionStrategyManager;
- (void)rendererOnChanged:(id)arg1 width:(int)arg2 height:(int)arg3;
- (void)rendererOnCreated:(id)arg1;
- (void)rendererOnDestroy:(id)arg1;
- (void)rendererOnDrawFrame:(id)arg1 width:(int)arg2 height:(int)arg3;
- (void)setup;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

