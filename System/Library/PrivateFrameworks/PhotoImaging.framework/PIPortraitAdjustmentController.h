/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:25:57 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoImaging/PIAdjustmentController.h>

@class NSDictionary, NSString;

@interface PIPortraitAdjustmentController : PIAdjustmentController {

	long long _version;

}

@property (nonatomic,copy) NSDictionary * portraitInfo; 
@property (nonatomic,copy) NSString * kind; 
@property (assign,nonatomic) long long version;                      //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) double strength; 
+(id)strengthKey;
+(id)kindKey;
+(id)portraitInfoKey;
-(long long)version;
-(NSDictionary *)portraitInfo;
-(NSString *)kind;
-(void)setPortraitInfo:(NSDictionary *)arg1 ;
-(void)setVersion:(long long)arg1 ;
-(void)setKind:(NSString *)arg1 ;
-(double)strength;
-(void)setStrength:(double)arg1 ;
-(BOOL)canRenderPortraitEffect;
-(id)initWithAdjustment:(id)arg1 ;
-(BOOL)isSettingEqual:(id)arg1 forKey:(id)arg2 ;
@end

