//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface GLUtil : NSObject
{
}

+ (union _GLKMatrix4)calculateMatrixFromQuaternion:(CDStruct_d2b197d1 *)arg1 orientation:(long long)arg2;
+ (_Bool)compileShader:(unsigned int *)arg1 type:(unsigned int)arg2 source:(id)arg3;
+ (unsigned int)createAndLinkProgramWith:(unsigned int)arg1 fsHandle:(unsigned int)arg2 attrs:(id)arg3;
+ (union _GLKMatrix4)getRotationMatrixFromQuaternion:(CDStruct_d2b197d1 *)arg1;
+ (float)getScrrenScale;
+ (void)glCheck:(id)arg1;
+ (void)loadObject3DMock:(id)arg1;
+ (void)loadObject3DWithPath:(id)arg1 output:(id)arg2;
+ (id)readRawText:(id)arg1;
+ (union _GLKMatrix4)remapCoordinateSystem:(float *)arg1 X:(int)arg2 Y:(int)arg3;
+ (union _GLKMatrix4)remapCoordinateSystemImpl:(float *)arg1 X:(int)arg2 Y:(int)arg3;
+ (void)texImage2D:(id)arg1;
+ (void)texImage2DWithPath:(id)arg1;

@end

