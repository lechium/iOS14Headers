/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:24 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/DocumentManager.framework/DocumentManager
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ShareSheet/UIActivity.h>

@protocol DOCItemActivityPerformer;
@class NSArray, NSString;

@interface DOCActivity : UIActivity {

	id<DOCItemActivityPerformer> _actionPerformerProxy;
	NSArray* _items;
	NSString* _identifier;
	NSString* _imageName;
	NSString* _localizedTitle;

}

@property (nonatomic,copy) NSArray * items;                                          //@synthesize items=_items - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                    //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * imageName;                                     //@synthesize imageName=_imageName - In the implementation block
@property (nonatomic,copy) NSString * localizedTitle;                                //@synthesize localizedTitle=_localizedTitle - In the implementation block
@property (readonly) id<DOCItemActivityPerformer> actionPerformerProxy;              //@synthesize actionPerformerProxy=_actionPerformerProxy - In the implementation block
+(long long)activityCategory;
+(id)activityWithIdentifier:(id)arg1 actionPerformerProxy:(id)arg2 ;
+(long long)_activityStyleForActivityIdentifier:(id)arg1 ;
+(BOOL)isDestructiveActionIdentifier:(id)arg1 ;
+(id)_imageNameForActivityIdentifier:(id)arg1 ;
+(id)_titleForActivityIdentifier:(id)arg1 ;
-(void)setLocalizedTitle:(NSString *)arg1 ;
-(NSArray *)items;
-(id)activityType;
-(NSString *)identifier;
-(void)setImageName:(NSString *)arg1 ;
-(NSString *)localizedTitle;
-(BOOL)_needsResolvedActivityItems;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)_systemImageName;
-(void)setItems:(NSArray *)arg1 ;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(void)prepareWithActivityItems:(id)arg1 ;
-(id)activityTitle;
-(NSString *)imageName;
-(void)performActivity;
-(id)initWithProxy:(id)arg1 identifier:(id)arg2 ;
-(id<DOCItemActivityPerformer>)actionPerformerProxy;
@end

