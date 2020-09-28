/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:38 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSWPStyleProvider.h>

@class NSString;

@interface TSWPStorageStyleProvider : NSObject <TSWPStyleProvider>

@property (nonatomic,readonly) BOOL supportsBoldItalicUnderlineShortcuts; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)styleProviderForStorage:(id)arg1 ;
-(id)paragraphStyleAtParIndex:(unsigned long long)arg1 effectiveRange:(NSRange*)arg2 ;
@end
