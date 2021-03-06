/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:58 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, WDDocument;

@interface WDRevisionAuthorTable : NSObject {

	NSMutableArray* mAuthors;
	WDDocument* mDocument;

}
-(id)authors;
-(id)initWithDocument:(id)arg1 ;
-(id)description;
-(unsigned long long)authorCount;
-(id)authorAt:(unsigned long long)arg1 ;
-(unsigned long long)authorAddLookup:(id)arg1 ;
-(void)addAuthor:(id)arg1 ;
@end

