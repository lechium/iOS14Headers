/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:45 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CLAPISerializer : NSObject
+(id)webItemTypeStringForType:(long long)arg1 ;
+(id)accountWithEmail:(id)arg1 password:(id)arg2 acceptTerms:(BOOL)arg3 ;
+(id)itemWithName:(id)arg1 ;
+(id)itemWithPrivate:(BOOL)arg1 ;
+(id)itemForRestore;
+(id)bookmarkWithURL:(id)arg1 name:(id)arg2 ;
+(id)bookmarkWithURL:(id)arg1 name:(id)arg2 private:(BOOL)arg3 ;
+(id)receiptWithBase64String:(id)arg1 ;
+(id)JSONDataFromDictionary:(id)arg1 ;
+(id)JSONDataFromArray:(id)arg1 ;
@end

