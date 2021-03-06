/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:26 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <Home/HFActionBuilder.h>

@class HMLightProfile;

@interface HFNaturalLightingActionBuilder : HFActionBuilder {

	BOOL _naturalLightEnabled;
	HMLightProfile* _lightProfile;

}

@property (nonatomic,retain) HMLightProfile * lightProfile;              //@synthesize lightProfile=_lightProfile - In the implementation block
@property (assign,nonatomic) BOOL naturalLightEnabled;                   //@synthesize naturalLightEnabled=_naturalLightEnabled - In the implementation block
+(Class)homeKitRepresentationClass;
-(id)commitItem;
-(id)performValidation;
-(void)setLightProfile:(HMLightProfile *)arg1 ;
-(id)createNewAction;
-(BOOL)naturalLightEnabled;
-(void)setNaturalLightEnabled:(BOOL)arg1 ;
-(id)initWithExistingObject:(id)arg1 inHome:(id)arg2 ;
-(BOOL)updateWithActionBuilder:(id)arg1 ;
-(id)copyForCreatingNewAction;
-(BOOL)hasSameTargetAsAction:(id)arg1 ;
-(id)description;
-(HMLightProfile *)lightProfile;
@end

