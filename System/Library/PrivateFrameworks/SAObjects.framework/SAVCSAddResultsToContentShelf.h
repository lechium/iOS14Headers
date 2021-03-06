/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:09 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAUIAddContentToView.h>

@class NSString, NSArray;

@interface SAVCSAddResultsToContentShelf : SAUIAddContentToView

@property (nonatomic,copy) NSString * contentShelfViewId; 
@property (nonatomic,copy) NSArray * fetchMoreResultsCommands; 
@property (assign,nonatomic) long long pageNumber; 
@property (nonatomic,copy) NSArray * results; 
+(id)addResultsToContentShelf;
+(id)addResultsToContentShelfWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSArray *)results;
-(id)encodedClassName;
-(void)setResults:(NSArray *)arg1 ;
-(id)groupIdentifier;
-(void)setPageNumber:(long long)arg1 ;
-(NSString *)contentShelfViewId;
-(void)setContentShelfViewId:(NSString *)arg1 ;
-(NSArray *)fetchMoreResultsCommands;
-(void)setFetchMoreResultsCommands:(NSArray *)arg1 ;
-(BOOL)requiresResponse;
-(long long)pageNumber;
@end

