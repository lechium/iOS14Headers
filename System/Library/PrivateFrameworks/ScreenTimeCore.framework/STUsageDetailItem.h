/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:33 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, UIImage;

@interface STUsageDetailItem : NSObject {

	BOOL _usageTrusted;
	float _quantity;
	NSString* _identifier;
	long long _type;

}

@property (copy,readonly) NSString * localizedDisplayName; 
@property (readonly) UIImage * iconImage; 
@property (copy,readonly) NSString * identifier;                        //@synthesize identifier=_identifier - In the implementation block
@property (readonly) BOOL isAllAppsOrCategories; 
@property (assign) long long type;                                      //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) float quantity;                            //@synthesize quantity=_quantity - In the implementation block
@property (readonly) float sortQuantity; 
@property (readonly) BOOL usageTrusted;                                 //@synthesize usageTrusted=_usageTrusted - In the implementation block
+(void)iconImageForBundleIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)keyPathsForValuesAffectingIsAllAppsOrCategories;
+(id)keyPathsForValuesAffectingSortQuantity;
-(UIImage *)iconImage;
-(NSString *)localizedDisplayName;
-(void)_didFindIconImage:(id)arg1 ;
-(NSString *)identifier;
-(id)initWithType:(long long)arg1 identifier:(id)arg2 ;
-(long long)type;
-(BOOL)isEqual:(id)arg1 ;
-(void)setType:(long long)arg1 ;
-(unsigned long long)hash;
-(float)quantity;
-(void)setQuantity:(float)arg1 ;
-(id)initWithType:(long long)arg1 identifier:(id)arg2 usageTrusted:(BOOL)arg3 ;
-(BOOL)usageTrusted;
-(BOOL)isAllAppsOrCategories;
-(float)sortQuantity;
@end

