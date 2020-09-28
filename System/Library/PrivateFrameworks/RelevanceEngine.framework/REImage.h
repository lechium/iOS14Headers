/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:05 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class UIImage;

@interface REImage : NSObject <NSCopying, NSCoding>

@property (nonatomic,readonly) UIImage * image; 
+(id)imageWithImage:(id)arg1 ;
+(id)imageNamed:(id)arg1 inBundle:(id)arg2 ;
+(id)imageWithData:(id)arg1 scale:(double)arg2 ;
+(id)imageWithCGImage:(CGImageRef)arg1 scale:(double)arg2 ;
+(id)imageWithContentsOfFileAtPath:(id)arg1 scale:(double)arg2 ;
-(UIImage *)image;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
