/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:19 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TelephonyUI/TelephonyUI-Structs.h>
#import <UIKitCore/UIView.h>

@interface TPView : UIView {

	BOOL _accessiblityConstraintsEnabled;
	BOOL _constraintsLoaded;

}

@property (assign,getter=isAccessiblityConstraintsEnabled,nonatomic) BOOL accessiblityConstraintsEnabled;              //@synthesize accessiblityConstraintsEnabled=_accessiblityConstraintsEnabled - In the implementation block
@property (assign,getter=isConstraintsLoaded,nonatomic) BOOL constraintsLoaded;                                        //@synthesize constraintsLoaded=_constraintsLoaded - In the implementation block
+(BOOL)requiresConstraintBasedLayout;
-(void)commonInit;
-(void)updateFonts;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)updateConstraints;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)isAccessiblityConstraintsEnabled;
-(void)setAccessiblityConstraintsEnabled:(BOOL)arg1 ;
-(id)init;
-(void)updateConstraintsConstants;
-(void)unloadConstraints;
-(id)initWithCoder:(id)arg1 ;
-(void)loadConstraints;
-(void)setConstraintsLoaded:(BOOL)arg1 ;
-(BOOL)isConstraintsLoaded;
@end

