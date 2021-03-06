/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:23 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SiriUIActivation.framework/SiriUIActivation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SiriPresentation <BSInvalidatable>
@property (nonatomic,readonly) long long identifier; 
@property (assign,nonatomic,__weak) id<SiriPresentationControllerDelegate> siriPresentationControllerDelegate; 
@required
-(long long)identifier;
-(void)invalidate;
-(BOOL)isEnabled;
-(void)dismiss;
-(void)setSiriPresentationControllerDelegate:(id)arg1;
-(void)dismissWithOptions:(id)arg1;
-(id<SiriPresentationControllerDelegate>)siriPresentationControllerDelegate;

@end

