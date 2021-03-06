/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:15 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Espresso/ETOptimizerDef.h>

@interface ETOptimizerDefSGD : ETOptimizerDef {

	float _lr;
	float _lr_decay_epoch;
	float _momentum;
	float _weight_decay;

}

@property (assign) float lr;                          //@synthesize lr=_lr - In the implementation block
@property (assign) float lr_decay_epoch;              //@synthesize lr_decay_epoch=_lr_decay_epoch - In the implementation block
@property (assign) float momentum;                    //@synthesize momentum=_momentum - In the implementation block
@property (assign) float weight_decay;                //@synthesize weight_decay=_weight_decay - In the implementation block
-(float)lr;
-(void)setLr:(float)arg1 ;
-(float)momentum;
-(id)init;
-(void)setLr_decay_epoch:(float)arg1 ;
-(void)setWeight_decay:(float)arg1 ;
-(float)lr_decay_epoch;
-(float)weight_decay;
-(void)setMomentum:(float)arg1 ;
@end

