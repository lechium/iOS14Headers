/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:47 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIImageView.h>

@interface _UIPageIndicatorView : UIImageView {

	long long _page;

}

@property (assign,nonatomic) long long page;              //@synthesize page=_page - In the implementation block
-(void)setPage:(long long)arg1 ;
-(id)initWithImage:(id)arg1 ;
-(void)setImage:(id)arg1 ;
-(BOOL)isInvalidated;
-(void)invalidate;
-(void)updateSymbolConfigurationForTraitCollection;
-(CGSize)sizeForImage:(id)arg1 withTraitCollection:(id)arg2 ;
-(long long)page;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)debugDescription;
-(void)prepare;
-(void)traitCollectionDidChange:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

