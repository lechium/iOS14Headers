/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:25:57 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PersonaUI.framework/PersonaUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PersonaUI/PersonaUI-Structs.h>
#import <UIKitCore/UIView.h>

@class PRMonogramView, PRImageView, NSData, PRLikeness;

@interface PRLikenessView : UIView {

	BOOL _circular;
	PRMonogramView* _monogramView;
	PRImageView* _imageView;
	unsigned long long _likenessType;
	NSData* _recipe;
	CGRect _cropRect;
	CGImageRef _staticRepresentation;
	BOOL _highlighted;
	BOOL _shouldDecode;
	PRLikeness* _likeness;

}

@property (assign,getter=isCircular,nonatomic) BOOL circular;              //@synthesize circular=_circular - In the implementation block
@property (assign,nonatomic) BOOL highlighted;                             //@synthesize highlighted=_highlighted - In the implementation block
@property (assign,nonatomic) BOOL shouldDecode;                            //@synthesize shouldDecode=_shouldDecode - In the implementation block
@property (nonatomic,retain) PRLikeness * likeness;                        //@synthesize likeness=_likeness - In the implementation block
+(void)initialize;
-(BOOL)highlighted;
-(BOOL)isCircular;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setCircular:(BOOL)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(PRLikeness *)likeness;
-(id)initWithLikeness:(id)arg1 ;
-(id)_monogramView;
-(id)_imageView;
-(void)_updateViewForLikeness:(BOOL)arg1 ;
-(BOOL)_shouldRenderStaticRepresentation;
-(void)_setDisplayedView:(id)arg1 ;
-(void)_imageForLikeness:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)_isLikenessEqual:(id)arg1 ;
-(void)setLikeness:(PRLikeness *)arg1 ;
-(void)setNeedsRedraw;
-(BOOL)shouldDecode;
-(void)setShouldDecode:(BOOL)arg1 ;
@end

