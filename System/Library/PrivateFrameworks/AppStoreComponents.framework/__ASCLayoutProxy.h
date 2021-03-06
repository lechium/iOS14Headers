/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:52 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AppStoreComponents/AppStoreComponents-Structs.h>
@class NSString;

@interface __ASCLayoutProxy : NSObject {

	 base;

}

@property (readonly,nonatomic) NSString * description; 
+(double)offerButtonHeight;
+(double)offerProgressDiameter;
+(id)offerEmptyLayoutWithImageView:(id)arg1 titleView:(id)arg2 subtitleView:(id)arg3 ;
+(id)offerTextLayoutWithTitleBackgroundView:(id)arg1 titleView:(id)arg2 subtitleView:(id)arg3 hasTrailingSubtitle:(BOOL)arg4 ;
+(id)offerIconLayoutWithImageView:(id)arg1 titleView:(id)arg2 subtitleView:(id)arg3 hasTrailingSubtitle:(BOOL)arg4 ;
+(id)traitEnvironmentWithTraitCollection:(id)arg1 ;
+(id)lockupLayoutOfSize:(id)arg1 traitCollection:(id)arg2 artworkView:(id)arg3 headingText:(id)arg4 titleText:(id)arg5 subtitleText:(id)arg6 offerText:(id)arg7 offerButton:(id)arg8 ;
+(id)tvTextPillOverlayWithBackgroundView:(id)arg1 textView:(id)arg2 ;
+(double)axOfferButtonHeight;
-(id)init;
-(NSString *)description;
-(CGSize)measuredSizeFittingSize:(CGSize)arg1 inTraitEnvironment:(id)arg2 ;
-(UIEdgeInsets)alignmentInsetsInTraitEnvironment:(id)arg1 ;
-(void)placeChildrenRelativeToRect:(CGRect)arg1 inTraitEnvironment:(id)arg2 ;
@end

