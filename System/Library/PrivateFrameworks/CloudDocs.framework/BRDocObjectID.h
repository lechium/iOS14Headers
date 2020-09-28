/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:24 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocs/BRFileObjectID.h>

@interface BRDocObjectID : BRFileObjectID {

	unsigned _docID;

}
+(BOOL)supportsSecureCoding;
-(unsigned long long)rawID;
-(id)asString;
-(BOOL)isDocumentID;
-(id)initWithCoder:(id)arg1 ;
-(id)documentID;
-(id)initWithDocIDNumber:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDocID:(unsigned)arg1 ;
-(id)description;
@end
