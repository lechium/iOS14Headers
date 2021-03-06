/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:50 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIContextMenuInteraction.h>

@interface _UIVariableGestureContextMenuInteraction : UIContextMenuInteraction {

	SCD_Struct_UI34 _flags;
	BOOL __prefersCompactAppearance;
	id __proxySender;

}

@property (assign,setter=_setProxySender:,nonatomic,__weak) id _proxySender;                                   //@synthesize _proxySender=__proxySender - In the implementation block
@property (assign,setter=_setPresentOnTouchDown:,nonatomic) BOOL _presentOnTouchDown; 
@property (assign,setter=_setPrefersCompactAppearance:,nonatomic) BOOL _prefersCompactAppearance;              //@synthesize _prefersCompactAppearance=__prefersCompactAppearance - In the implementation block
-(BOOL)_prefersCompactAppearance;
-(long long)menuAppearance;
-(void)_setProxySender:(id)arg1 ;
-(id)_proxySender;
-(void)_setPresentOnTouchDown:(BOOL)arg1 ;
-(id)_interactionDrivers;
-(id)initWithDelegate:(id)arg1 ;
-(void)_setPrefersCompactAppearance:(BOOL)arg1 ;
-(BOOL)_presentOnTouchDown;
-(void)_willBeginWithConfiguration:(id)arg1 ;
-(BOOL)_clickPresentationInteractionShouldPlayFeedback:(id)arg1 ;
@end

