/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:56 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/BiometricKitUI.framework/BiometricKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <BiometricKitUI/BiometricKitDelegate.h>

@protocol BiometricKitUIEnrollResultDelegate;
@class NSMutableDictionary, BiometricKit, NSString;

@interface BiometricKitUIEnrollViewController : UIViewController <BiometricKitDelegate> {

	NSMutableDictionary* _properties;
	BiometricKit* _biometricKit;
	id<BiometricKitUIEnrollResultDelegate> _delegate;

}

@property (nonatomic,retain) BiometricKit * biometricKit;                                  //@synthesize biometricKit=_biometricKit - In the implementation block
@property (assign,nonatomic) id<BiometricKitUIEnrollResultDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setProperty:(id)arg1 forKey:(id)arg2 ;
-(id)propertyForKey:(id)arg1 ;
-(void)setDelegate:(id<BiometricKitUIEnrollResultDelegate>)arg1 ;
-(id<BiometricKitUIEnrollResultDelegate>)delegate;
-(void)cancelEnroll;
-(void)restartEnroll;
-(BiometricKit *)biometricKit;
-(void)setBiometricKit:(BiometricKit *)arg1 ;
@end
