/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:01 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocompleteUI.framework/ContactsAutocompleteUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CNComposeAddressConcatenator : NSObject {

	NSString* _andNMoreFormat;
	NSString* _andNMoreNoEllipsisFormat;
	NSString* _nAddressesFormat;
	NSString* _truncatedAddressFormat;

}

@property (nonatomic,retain) NSString * andNMoreFormat;                        //@synthesize andNMoreFormat=_andNMoreFormat - In the implementation block
@property (nonatomic,retain) NSString * andNMoreNoEllipsisFormat;              //@synthesize andNMoreNoEllipsisFormat=_andNMoreNoEllipsisFormat - In the implementation block
@property (nonatomic,retain) NSString * nAddressesFormat;                      //@synthesize nAddressesFormat=_nAddressesFormat - In the implementation block
@property (nonatomic,retain) NSString * truncatedAddressFormat;                //@synthesize truncatedAddressFormat=_truncatedAddressFormat - In the implementation block
+(id)defaultRecipientListConcatenator;
-(void)setAndNMoreFormat:(NSString *)arg1 ;
-(void)setAndNMoreNoEllipsisFormat:(NSString *)arg1 ;
-(void)setNAddressesFormat:(NSString *)arg1 ;
-(void)setTruncatedAddressFormat:(NSString *)arg1 ;
-(NSString *)truncatedAddressFormat;
-(void)getCommaSeparatedAddressList:(out id*)arg1 andListSuffix:(out id*)arg2 withAddressCount:(unsigned long long)arg3 prefixForAddressAtIndex:(/*^block*/id)arg4 stringForAddressAtIndex:(/*^block*/id)arg5 lengthValidationBlock:(/*^block*/id)arg6 ;
-(id)commaSeparatedAddressListWithAddressCount:(unsigned long long)arg1 prefixForAddressAtIndex:(/*^block*/id)arg2 stringForAddressAtIndex:(/*^block*/id)arg3 lengthValidationBlock:(/*^block*/id)arg4 ;
-(NSString *)andNMoreFormat;
-(NSString *)andNMoreNoEllipsisFormat;
-(NSString *)nAddressesFormat;
@end

