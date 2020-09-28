/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:36 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray, NSError, FCFeedRange;

@interface FCFeedResponse : NSObject {

	BOOL _exhaustedRequestRange;
	NSString* _feedID;
	NSArray* _feedItems;
	NSError* _error;

}

@property (nonatomic,copy) NSString * feedID;                             //@synthesize feedID=_feedID - In the implementation block
@property (nonatomic,copy) NSArray * feedItems;                           //@synthesize feedItems=_feedItems - In the implementation block
@property (assign,nonatomic) BOOL exhaustedRequestRange;                  //@synthesize exhaustedRequestRange=_exhaustedRequestRange - In the implementation block
@property (nonatomic,copy) NSError * error;                               //@synthesize error=_error - In the implementation block
@property (nonatomic,copy,readonly) FCFeedRange * feedRange; 
-(void)setFeedItems:(NSArray *)arg1 ;
-(void)setFeedID:(NSString *)arg1 ;
-(void)setExhaustedRequestRange:(BOOL)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(FCFeedRange *)feedRange;
-(BOOL)exhaustedRequestRange;
-(id)feedResponseByMergingWithResponse:(id)arg1 ;
-(NSArray *)feedItems;
-(NSString *)feedID;
@end
