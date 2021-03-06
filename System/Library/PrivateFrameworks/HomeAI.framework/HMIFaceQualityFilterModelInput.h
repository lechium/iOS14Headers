/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:34 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MLFeatureProvider.h>

@class MLMultiArray, NSString, NSSet;

@interface HMIFaceQualityFilterModelInput : NSObject <MLFeatureProvider> {

	MLMultiArray* _input;
	NSString* _inputName;

}

@property (nonatomic,retain) MLMultiArray * input;                //@synthesize input=_input - In the implementation block
@property (readonly) NSString * inputName;                        //@synthesize inputName=_inputName - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
-(NSSet *)featureNames;
-(id)featureValueForName:(id)arg1 ;
-(NSString *)inputName;
-(void)setInput:(MLMultiArray *)arg1 ;
-(MLMultiArray *)input;
-(id)initWithInput:(id)arg1 inputName:(id)arg2 ;
@end

