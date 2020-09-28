/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:36 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface FCBundleSubscriptionChangeSet : NSObject {

	NSArray* _tagIDsAdded;
	NSArray* _tagIDsRemoved;

}

@property (nonatomic,copy) NSArray * tagIDsAdded;                //@synthesize tagIDsAdded=_tagIDsAdded - In the implementation block
@property (nonatomic,copy) NSArray * tagIDsRemoved;              //@synthesize tagIDsRemoved=_tagIDsRemoved - In the implementation block
-(NSArray *)tagIDsAdded;
-(void)setTagIDsAdded:(NSArray *)arg1 ;
-(NSArray *)tagIDsRemoved;
-(void)setTagIDsRemoved:(NSArray *)arg1 ;
-(id)initWithTagIDsAdded:(id)arg1 tagIDsRemoved:(id)arg2 ;
@end
