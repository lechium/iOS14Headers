/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:22 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/Contacts-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, CNContact;

@interface CNContactProperty : NSObject <NSCopying, NSSecureCoding> {

	NSString* _key;
	NSString* _identifier;
	CNContact* _internalContact;

}

@property (nonatomic,copy,readonly) CNContact * contact; 
@property (nonatomic,copy,readonly) NSString * key; 
@property (nonatomic,readonly) id value; 
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,copy,readonly) NSString * label; 
+(id)phoneticPropertiesMap;
+(id)contactPropertyWithContactNoCopy:(id)arg1 propertyKey:(id)arg2 identifier:(id)arg3 ;
+(BOOL)supportsSecureCoding;
+(id)contactPropertyWithContact:(id)arg1 propertyKey:(id)arg2 identifier:(id)arg3 ;
-(id)property;
-(id)phoneticProperty;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)multiValueIdentifier;
-(NSString *)key;
-(CNContact *)contact;
-(id)labeledValue;
-(id)sourceContact;
-(id)value;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)label;
-(unsigned long long)hash;
-(id)description;
@end
