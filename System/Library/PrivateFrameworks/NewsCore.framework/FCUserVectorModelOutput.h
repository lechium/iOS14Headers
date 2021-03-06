/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MLFeatureProvider.h>

@class MLMultiArray, NSSet;

@interface FCUserVectorModelOutput : NSObject <MLFeatureProvider> {

	MLMultiArray* _user_vector;

}

@property (nonatomic,retain) MLMultiArray * user_vector;              //@synthesize user_vector=_user_vector - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
-(NSSet *)featureNames;
-(id)featureValueForName:(id)arg1 ;
-(id)initWithUser_vector:(id)arg1 ;
-(MLMultiArray *)user_vector;
-(void)setUser_vector:(MLMultiArray *)arg1 ;
@end

