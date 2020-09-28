/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:47 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsToday/NTTodayModuleDescriptorsOperation.h>

@protocol NFCopying;
@class NSArray;

@interface NTNewsModuleDescriptorsOperation : NTTodayModuleDescriptorsOperation {

	NSArray* _resultTodayModuleDescriptors;
	id<NFCopying> _prefetchedContent;

}

@property (nonatomic,copy) NSArray * resultTodayModuleDescriptors;              //@synthesize resultTodayModuleDescriptors=_resultTodayModuleDescriptors - In the implementation block
@property (nonatomic,copy) id<NFCopying> prefetchedContent;                     //@synthesize prefetchedContent=_prefetchedContent - In the implementation block
-(void)operationWillFinishWithError:(id)arg1 ;
-(void)performOperation;
-(BOOL)validateOperation;
-(NSArray *)resultTodayModuleDescriptors;
-(id<NFCopying>)prefetchedContent;
-(void)setPrefetchedContent:(id<NFCopying>)arg1 ;
-(void)setResultTodayModuleDescriptors:(NSArray *)arg1 ;
@end
