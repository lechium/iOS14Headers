/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:50 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/USDKit.framework/USDKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <USDKit/USDKit-Structs.h>
@interface USKToken : NSObject {

	TfToken* _token;

}
+(id)dataTypeWithTfToken:(TfToken*)arg1 ;
+(id)nodeTypeWithTfToken:(TfToken*)arg1 ;
+(id)schemaTypeWithTfToken:(TfToken*)arg1 ;
+(id)roleTypeWithTfToken:(TfToken*)arg1 ;
+(id)tokenWithNodeType:(id)arg1 ;
+(id)tokenWithRoleType:(id)arg1 ;
+(id)tokenWithDataType:(id)arg1 ;
+(id)tokenWithSchemaType:(id)arg1 ;
-(id)stringValue;
-(TfToken*)token;
-(id)init;
-(id)initWithString:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithTfToken:(TfToken*)arg1 ;
@end

