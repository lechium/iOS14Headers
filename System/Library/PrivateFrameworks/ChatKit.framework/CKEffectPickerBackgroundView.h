/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:08 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIVisualEffectView, CALayer, CABackdropLayer;

@interface CKEffectPickerBackgroundView : UIView {

	UIVisualEffectView* _effectView;
	CALayer* _blueContrastLayer;
	CABackdropLayer* _backdrop;

}

@property (nonatomic,retain) UIVisualEffectView * effectView;              //@synthesize effectView=_effectView - In the implementation block
@property (nonatomic,retain) CALayer * blueContrastLayer;                  //@synthesize blueContrastLayer=_blueContrastLayer - In the implementation block
@property (nonatomic,retain) CABackdropLayer * backdrop;                   //@synthesize backdrop=_backdrop - In the implementation block
-(void)setBackdrop:(CABackdropLayer *)arg1 ;
-(CABackdropLayer *)backdrop;
-(UIVisualEffectView *)effectView;
-(void)setEffectView:(UIVisualEffectView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CALayer *)blueContrastLayer;
-(void)setBlueContrastLayer:(CALayer *)arg1 ;
-(void)updateBackgroundVisualEffect;
@end

