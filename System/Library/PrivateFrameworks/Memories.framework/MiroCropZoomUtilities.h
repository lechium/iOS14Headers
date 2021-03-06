/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:58:33 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


#import <Memories/Memories-Structs.h>
@interface MiroCropZoomUtilities : NSObject
-(CGRect)horizontallyClampedImageRect:(CGRect)arg1 imageSize:(CGSize)arg2 ;
-(CGRect)verticallyClampedImageRect:(CGRect)arg1 imageSize:(CGSize)arg2 ;
-(BOOL)hasCompletedAnalysis:(id)arg1 ;
-(CGRect)clampImageRect:(CGRect)arg1 toImageSize:(CGSize)arg2 ;
-(CGRect)rectFromDesiredPosition:(SCD_Struct_Mi20)arg1 outputAspectRatio:(float)arg2 image:(id)arg3 ;
-(CGRect)adjustKBRect:(CGRect)arg1 toContainRect:(CGRect)arg2 withinImageSize:(CGSize)arg3 ;
@end

