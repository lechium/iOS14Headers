/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:14 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TeaUI/TeaUI-Structs.h>
#import <UIKitCore/UICollectionReusableView.h>
#import <libobjc.A.dylib/TUGutterViewBoundsObserver.h>

@interface TeaUI.GradientSectionDecorationView : UICollectionReusableView <TUGutterViewBoundsObserver> {

	 gradientView;
	 gradientSize;
	 overscrollPinPosition;

}
-(void)willMoveToSuperview:(id)arg1 ;
-(void)didMoveToSuperview;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)initWithCoder:(id)arg1 ;
-(void)gutterViewBoundsDidChange;
-(void)applyLayoutAttributes:(id)arg1 ;
@end
