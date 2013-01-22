//
//  YTOValabilitateRCAViewController.h
//  i-asigurare
//
//  Created by Andi Aparaschivei on 10/25/12.
//
//

#import <UIKit/UIKit.h>
#import "YTOAutovehicul.h"

@interface YTOValabilitateRCAViewController : UIViewController<NSXMLParserDelegate>
{
    IBOutlet UILabel * lblMasina;
    IBOutlet UILabel * lblSerie;
    
    IBOutlet UIView     * vwLoading;
    IBOutlet UILabel    * lblLoadingTitlu;
    IBOutlet UILabel    * lblLoadingDescription;
    IBOutlet UIButton   * btnLoadingOk;
    IBOutlet UILabel    * lblLoadingOk;
    IBOutlet UIActivityIndicatorView * loading;
    
    NSMutableData * capturedCharactes;
	NSMutableString * currentElementValue;
	NSString    * responseMessage;
	NSString    * jsonResponse;
    
    NSDate * dataExpirare;
    
    IBOutlet UIView      * vwPopup;
    IBOutlet UILabel     * lblPopupTitle;
    IBOutlet UILabel     * lblPopupDescription;
    
    IBOutlet UIView      * vwErrorAlert;
    IBOutlet UIButton    * btnErrorAlertOK;
    IBOutlet UIButton    * btnErrorAlertNO;
    
    IBOutlet UIView      * vwDetailAlert;
    IBOutlet UIButton    * btnDetailAlertOK;
    
    IBOutlet UIView      * vwDetailErrorAlert;
    IBOutlet UIButton    * btnDetailErrorAlertOK;
    
    IBOutlet UIView      * vwServiciu;
    IBOutlet UILabel     * lblServiciuDescription;
    
    IBOutlet UILabel     * lblTitlu;
    IBOutlet UILabel     * lblExpira;
}
@property (nonatomic, retain) NSMutableData * responseData;
@property (nonatomic, retain) YTOAutovehicul * masina;

- (IBAction)selecteazaMasina:(id)sender;
- (IBAction) callVerificaRca;
- (void) setAutovehicul:(YTOAutovehicul *)m;

- (void) showLoading;
- (IBAction) hideLoading;
- (void) showPopupServiciu:description;
- (void) showPopup:(NSString *)title withDescription:(NSString *)description;
- (void) arataPopup:(NSString *)title withDescription:(NSString *)desciption;

- (IBAction) hideErrorAlert:(id)sender;
- (IBAction) hideDetailErrorAlert;
- (IBAction) hideDetailAlert;
- (IBAction) hidePopup;
- (IBAction) hidePopupServiciu;
@end
