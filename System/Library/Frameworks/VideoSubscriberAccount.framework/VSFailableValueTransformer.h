/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:35 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSValueTransformer.h>

@class NSValueTransformer;

@interface VSFailableValueTransformer : NSValueTransformer {

	NSValueTransformer* _objectValueTransformer;

}

@property (nonatomic,retain) NSValueTransformer * objectValueTransformer;              //@synthesize objectValueTransformer=_objectValueTransformer - In the implementation block
+(Class)transformedValueClass;
+(BOOL)allowsReverseTransformation;
-(id)transformedValue:(id)arg1 ;
-(NSValueTransformer *)objectValueTransformer;
-(void)setObjectValueTransformer:(NSValueTransformer *)arg1 ;
@end

