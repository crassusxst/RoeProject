//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MD360DirectorFactory.h"

@class MDPlaneScaleCalculator, NSString;

__attribute__((visibility("hidden")))
@interface MDOrthogonalDirectorFactory : NSObject <MD360DirectorFactory>
{
    MDPlaneScaleCalculator *_calculator;
}

- (void).cxx_destruct;
@property(nonatomic) __weak MDPlaneScaleCalculator *calculator; // @synthesize calculator=_calculator;
- (id)createDirector:(int)arg1;
- (id)initWith:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

