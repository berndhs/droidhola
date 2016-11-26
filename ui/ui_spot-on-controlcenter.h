/********************************************************************************
** Form generated from reading UI file 'spot-on-controlcenter.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPOT_2D_ON_2D_CONTROLCENTER_H
#define UI_SPOT_2D_ON_2D_CONTROLCENTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "spot-on-tabwidget.h"
#include "spot-on-textedit.h"
#include "spot-on-textbrowser.h"
#include "spot-on.h"

QT_BEGIN_NAMESPACE

class Ui_spoton_mainwindow
{
public:
    QAction *action_Quit;
    QAction *action_Log_Viewer;
    QAction *action_ResetSpotOn;
    QAction *action_Rosetta;
    QAction *action_Copy;
    QAction *action_Paste;
    QAction *action_Export_Public_Keys;
    QAction *action_Import_Public_Keys;
    QAction *action_Export_Listeners;
    QAction *action_Import_Neighbors;
    QAction *action_StarBeam_Analyzer;
    QAction *action_Minimal_Display;
    QAction *action_File_Encryption;
    QAction *actionClear_Clipboard_Buffer;
    QAction *action_Poptastic_Settings;
    QAction *action_Options;
    QAction *action_About;
    QAction *action_Echo_Key_Share;
    QAction *action_Purge_Ephemeral_Keys;
    QAction *action_Statistics_Window;
    QAction *action_Neighbor_Summary_Panel;
    QAction *action_RSS;
    QAction *action_Buzz;
    QAction *action_Listeners;
    QAction *action_Neighbors;
    QAction *action_Search;
    QAction *action_StarBeam;
    QAction *action_Urls;
    QAction *action_Vacuum_Databases;
    QAction *action_Notifications_Window;
    QAction *action_New_Global_Name;
    QAction *action_Documentation;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_3;
    spoton_tabwidget *tab;
    QWidget *tab_irc;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_30;
    QFrame *line_3;
    QScrollArea *scrollArea_5;
    QWidget *scrollAreaWidgetContents_5;
    QVBoxLayout *verticalLayout_54;
    QHBoxLayout *horizontalLayout_41;
    QLabel *label_32;
    QLineEdit *buzzName;
    QPushButton *saveBuzzName;
    QHBoxLayout *horizontalLayout_34;
    QLabel *label_82;
    QComboBox *commonBuzzChannels;
    QPushButton *buzz_details;
    QSpacerItem *horizontalSpacer_64;
    QFrame *buzz_frame;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_33;
    QLabel *label_33;
    QLineEdit *channel;
    QLabel *label_72;
    QLineEdit *demagnetize;
    QHBoxLayout *horizontalLayout_40;
    QLabel *label_44;
    QSpinBox *buzzIterationCount;
    QLabel *label_36;
    QComboBox *channelType;
    QHBoxLayout *horizontalLayout_61;
    QLabel *label_61;
    QLineEdit *buzzHashKey;
    QLabel *label_37;
    QLineEdit *channelSalt;
    QLabel *label_62;
    QComboBox *buzzHashType;
    QComboBox *buzzActions;
    QHBoxLayout *horizontalLayout_45;
    QLabel *label_49;
    QComboBox *favorites;
    QHBoxLayout *horizontalLayout_28;
    QComboBox *buzzTools;
    QPushButton *join;
    spoton_tabwidget *buzzTab;
    QWidget *tab_chat;
    QVBoxLayout *verticalLayout_18;
    QWidget *layouttab;
    QVBoxLayout *verticalLayout_72;
    QLabel *label_26;
    QFrame *line_7;
    QSplitter *splitter_4;
    QSplitter *splitter_5;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_14;
    QTextBrowser *messages;
    spoton_textedit *message;
    QHBoxLayout *horizontalLayout_62gb;
    QPushButton *clearMessages;
    QComboBox *status;
    QPushButton *sendMessage;
    QTextEdit *custom;
    QGroupBox *groupBox_11;
    QVBoxLayout *verticalLayout_73;
    QSplitter *chatHorizontalSplitter;
    QTableWidget *participants;
    QWidget *layoutWidget1_2;
    QVBoxLayout *verticalLayout_74;
    QFrame *line_17;
    QLabel *label_5;
    QLineEdit *nodeName;
    QPushButton *saveNodeName;
    QCheckBox *hideOfflineParticipants;
    QFrame *line_14;
    QToolButton *chatActionMenu;
    QWidget *tab_email;
    QVBoxLayout *verticalLayout_26;
    QLabel *label_35;
    QFrame *line_4;
    QScrollArea *scrollArea_6;
    QWidget *scrollAreaWidgetContents_6;
    QVBoxLayout *verticalLayout_55;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_17;
    QPushButton *refreshMail;
    QPushButton *retrieveMail;
    QPushButton *emptyTrash;
    QSpacerItem *horizontalSpacer_7;
    QTabWidget *mailTab;
    QWidget *tab_4;
    QHBoxLayout *horizontalLayout;
    QSplitter *emailSplitter;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_69;
    QHBoxLayout *horizontalLayout_85;
    QComboBox *folder;
    QPushButton *deleteEmail;
    QPushButton *reply;
    QPushButton *resend;
    QPushButton *saveAttachment;
    QSplitter *readVerticalSplitter;
    QTableWidget *mail;
    QTextBrowser *mailMessage;
    QWidget *tab_6;
    QVBoxLayout *verticalLayout_23;
    QHBoxLayout *horizontalLayout_37;
    QLabel *label_27;
    QSpinBox *days;
    QLabel *label_28;
    QHBoxLayout *horizontalLayout_19;
    QCheckBox *postofficeCheckBox;
    QSpacerItem *horizontalSpacer_18;
    QTableWidget *postoffice;
    QGroupBox *groupBox_6;
    QVBoxLayout *verticalLayout_50;
    QVBoxLayout *verticalLayout_51;
    QTableWidget *institutions;
    QHBoxLayout *horizontalLayout_76;
    QPushButton *copyInstitution;
    QPushButton *deleteInstitution;
    QGroupBox *groupBox_5;
    QVBoxLayout *verticalLayout_52;
    QFrame *institutionFrame;
    QVBoxLayout *verticalLayout_53;
    QGridLayout *gridLayout_8;
    QComboBox *institutionPostalAddressType;
    QLabel *label_75;
    QLineEdit *institutionName;
    QLabel *label_77;
    QLineEdit *institutionPostalAddress;
    QComboBox *institutionNameType;
    QLabel *label_79;
    QLabel *label_80;
    QHBoxLayout *horizontalLayout_77;
    QCheckBox *addInstitutionCheckBox;
    QLineEdit *addInstitutionLineEdit;
    QHBoxLayout *horizontalLayout_79;
    QSpacerItem *horizontalSpacer_58;
    QPushButton *addInstitution;
    QWidget *tab_13;
    QVBoxLayout *verticalLayout_19;
    QGridLayout *gridLayout_4;
    QLabel *label_25;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout_47;
    QComboBox *emailName;
    QLineEdit *emailNameEditable;
    QPushButton *reloadEmailNames;
    QPushButton *saveEmailName;
    QLabel *label_41;
    QVBoxLayout *verticalLayout_71;
    QSpacerItem *verticalSpacer_7;
    QLabel *label_4;
    QCheckBox *richtext;
    QSpacerItem *verticalSpacer_5;
    QHBoxLayout *horizontalLayout_31;
    QLineEdit *goldbug;
    QComboBox *email_fs_gb;
    QCheckBox *saveCopy;
    QCheckBox *sign_this_email;
    QPushButton *sendMail;
    QHBoxLayout *horizontalLayout_51;
    QTextEdit *attachment;
    QPushButton *selectAttachment;
    QTextEdit *outgoingMessage;
    QVBoxLayout *verticalLayout_70;
    QTableWidget *emailParticipants;
    QLabel *label_94;
    QLineEdit *outgoingSubject;
    QVBoxLayout *verticalLayout_20;
    QHBoxLayout *horizontalLayout_9;
    QPushButton *clearOutgoing;
    QLabel *label_10;
    QHBoxLayout *horizontalLayout_24;
    QToolButton *emailWriteActionMenu;
    QWidget *tab_createserver;
    QVBoxLayout *verticalLayout_33;
    QLabel *label_76;
    QFrame *line_5;
    QScrollArea *scrollArea_7;
    QWidget *scrollAreaWidgetContents_7;
    QVBoxLayout *verticalLayout_29;
    QVBoxLayout *verticalLayout_6;
    QTableWidget *listeners;
    QGroupBox *groupBox_7;
    QVBoxLayout *verticalLayout_31;
    QLabel *label_21;
    QHBoxLayout *horizontalLayout_36;
    QLabel *label_38;
    QComboBox *listenersEchoMode;
    QSpacerItem *horizontalSpacer_27;
    QHBoxLayout *horizontalLayout_63;
    QCheckBox *listenerShareAddress;
    QSpacerItem *horizontalSpacer_51;
    QToolButton *listenersActionMenu;
    QHBoxLayout *horizontalLayout_52;
    QCheckBox *sslListener;
    QComboBox *listenerKeySize;
    QCheckBox *permanentCertificate;
    QCheckBox *recordIPAddress;
    QGridLayout *gridLayout_12;
    QLineEdit *listenerIP;
    QComboBox *listenerTransport;
    QSpinBox *listenerPort;
    QRadioButton *ipv4Listener;
    QLineEdit *listenerScopeId;
    QLabel *label_65;
    QComboBox *listenerIPCombo;
    QLabel *label_12;
    QLabel *listenerScopeIdLabel;
    QRadioButton *ipv6Listener;
    QLabel *label_11;
    QPushButton *addListener;
    QHBoxLayout *horizontalLayout_86;
    QLabel *label_122;
    QSpinBox *days_valid;
    QLabel *label_64;
    QLineEdit *listenersSslControlString;
    QLabel *label_71;
    QComboBox *listenerOrientation;
    QGroupBox *accountsGB;
    QVBoxLayout *verticalLayout_37;
    QHBoxLayout *horizontalLayout_67;
    QListWidget *accounts;
    QVBoxLayout *verticalLayout_30;
    QPushButton *deleteAccount;
    QHBoxLayout *horizontalLayout_70;
    QCheckBox *ota;
    QLabel *label_88;
    QGridLayout *gridLayout_6;
    QLabel *label_47;
    QLabel *label_48;
    QLineEdit *accountName;
    QHBoxLayout *horizontalLayout_30;
    QLineEdit *accountPassword;
    QPushButton *addAccount;
    QGroupBox *approvedIPs;
    QVBoxLayout *verticalLayout_36;
    QListWidget *acceptedIPList;
    QLineEdit *acceptedIP;
    QHBoxLayout *horizontalLayout_49;
    QSpacerItem *horizontalSpacer_37;
    QPushButton *addAcceptedIP;
    QPushButton *deleteAcceptedIP;
    QGroupBox *aeBox;
    QVBoxLayout *verticalLayout_63;
    QLabel *label_93;
    QTableWidget *ae_tokens;
    QLabel *label_89;
    QGridLayout *gridLayout_9;
    QLineEdit *ae_token;
    QLabel *label_83;
    QLabel *label_84;
    QComboBox *ae_e_type;
    QLabel *label_85;
    QComboBox *ae_h_type;
    QCheckBox *ae_listeners_magnet;
    QHBoxLayout *horizontalLayout_81;
    QSpacerItem *horizontalSpacer_65;
    QPushButton *addAEToken;
    QPushButton *deleteAEToken;
    QGroupBox *motdBox;
    QVBoxLayout *verticalLayout_27;
    QSplitter *listenersHorizontalSplitter;
    QPlainTextEdit *motd;
    QHBoxLayout *horizontalLayout_80;
    QSpacerItem *horizontalSpacer_63;
    QPushButton *saveMOTD;
    QWidget *tab_neighbors;
    QVBoxLayout *verticalLayout_34;
    QLabel *label_86;
    QFrame *line_6;
    QScrollArea *scrollArea_8;
    QWidget *scrollAreaWidgetContents_8;
    QVBoxLayout *verticalLayout_61;
    QSplitter *neighborsVerticalSplitter;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_57;
    QHBoxLayout *horizontalLayout_26;
    QToolButton *neighborsActionMenu;
    QPushButton *shareBuzzMagnet;
    QSpacerItem *horizontalSpacer_22;
    QHBoxLayout *horizontalLayout_48;
    QTableWidget *neighbors;
    QTextBrowser *neighborSummary;
    QSplitter *splitter_3;
    QWidget *layoutWidget1b;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *groupBox_addip_2;
    QVBoxLayout *verticalLayout_21;
    QLabel *label_23;
    QGridLayout *gridLayout_3;
    QLineEdit *neighborIP;
    QLabel *label_24;
    QSpinBox *neighborPort;
    QLabel *label_13;
    QLabel *neighborScopeIdLabel;
    QLineEdit *neighborScopeId;
    QLabel *label_66;
    QHBoxLayout *horizontalLayout_60;
    QComboBox *neighborTransport;
    QLabel *label_70;
    QComboBox *neighborOrientation;
    QSpacerItem *horizontalSpacer_50;
    QRadioButton *ipv6Neighbor;
    QRadioButton *dynamicdns;
    QRadioButton *ipv4Neighbor;
    QHBoxLayout *horizontalLayout_35;
    QLabel *label_39;
    QComboBox *neighborsEchoMode;
    QCheckBox *addException;
    QCheckBox *requireSsl;
    QLabel *sslKeySizeLabel;
    QComboBox *neighborKeySize;
    QHBoxLayout *horizontalLayout_89;
    QLabel *label_78;
    QLineEdit *neighborsSslControlString;
    QGroupBox *proxy;
    QGridLayout *gridLayout_5;
    QLabel *label_7;
    QLabel *label_19;
    QHBoxLayout *horizontalLayout_39;
    QSpinBox *proxyPort;
    QSpacerItem *horizontalSpacer_29;
    QHBoxLayout *horizontalLayout_29;
    QComboBox *proxyType;
    QSpacerItem *horizontalSpacer_28;
    QLabel *label_3;
    QLineEdit *proxyHostname;
    QLineEdit *proxyPassword;
    QLabel *label_20;
    QLineEdit *proxyUsername;
    QLabel *label_8;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *addNeighbor;
    QSpacerItem *verticalSpacer_8;
    QWidget *tab_search;
    QVBoxLayout *verticalLayout;
    QLabel *label_119;
    QFrame *line_8;
    QScrollArea *scrollArea_9;
    QWidget *scrollAreaWidgetContents_9;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *urls_settings_layout;
    QPushButton *showUrlSettings;
    QSpacerItem *horizontalSpacer_2;
    QLabel *url_database_connection_information;
    QSpacerItem *horizontalSpacer_73;
    QScrollArea *urlSettings;
    QWidget *scrollAreaWidgetContents_12;
    QVBoxLayout *verticalLayout_65;
    QLabel *postgresql_recommendation_label;
    QGroupBox *groupBox_15;
    QHBoxLayout *horizontalLayout_87;
    QLabel *label_105;
    QComboBox *urls_db_type;
    QPushButton *postgresqlConnect;
    QLabel *label_120;
    QPushButton *prepareUrlDatabases;
    QSpacerItem *horizontalSpacer_71;
    QPushButton *correctUrlDatabases;
    QToolButton *deleteAllUrls;
    QGroupBox *groupBox_14;
    QVBoxLayout *verticalLayout_67;
    QLabel *commonCredentialsLabel;
    QHBoxLayout *horizontalLayout_96;
    QLabel *label_134;
    QLabel *label_131;
    QHBoxLayout *horizontalLayout_97;
    QLabel *label_132;
    QLineEdit *commonUrlPassphrase;
    QLabel *label_133;
    QLineEdit *commonUrlPin;
    QPushButton *saveCommonUrlCredentials;
    QHBoxLayout *horizontalLayout_99;
    QLabel *label_138;
    QComboBox *commonUrlCipher;
    QLabel *label_139;
    QComboBox *commonUrlHash;
    QLabel *label_140;
    QSpinBox *commonUrlIterationCount;
    QSpacerItem *horizontalSpacer_80;
    QGroupBox *groupBox_13;
    QVBoxLayout *verticalLayout_64;
    QLabel *importCredentialsLabel;
    QLabel *label_118;
    QHBoxLayout *horizontalLayout_90;
    QLabel *label_107;
    QLineEdit *urlIniPath;
    QLabel *label_108;
    QPushButton *selectUrlIni;
    QPushButton *reloadIni;
    QHBoxLayout *horizontalLayout_93;
    QLabel *label_109;
    QComboBox *urlCipher;
    QLabel *label_110;
    QComboBox *urlHash;
    QLabel *label_111;
    QSpinBox *urlIteration;
    QSpacerItem *horizontalSpacer_75;
    QHBoxLayout *horizontalLayout_92;
    QLabel *label_113;
    QLineEdit *urlPassphrase;
    QHBoxLayout *horizontalLayout_88;
    QLabel *label_116;
    QLineEdit *urlIniHash;
    QLabel *label_112;
    QLineEdit *urlSalt;
    QHBoxLayout *urls_import_layout;
    QSpacerItem *horizontalSpacer_74;
    QLabel *label_114;
    QPushButton *verify;
    QLabel *label_115;
    QPushButton *saveUrlCredentials;
    QLabel *label_106;
    QPushButton *importUrls;
    QGroupBox *urlsBox;
    QVBoxLayout *verticalLayout_68;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_4;
    QLineEdit *search;
    QPushButton *discover;
    QSpacerItem *horizontalSpacer_5;
    QTextBrowser *searchfor;
    spoton_textbrowser *urls;
    QHBoxLayout *horizontalLayout_16;
    QSpacerItem *horizontalSpacer_12;
    QLabel *url_pages;
    QSpacerItem *horizontalSpacer_13;
    QWidget *tab_settings;
    QVBoxLayout *verticalLayout_15;
    QLabel *label_96;
    QFrame *line_9;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_35;
    QFrame *settings_frame;
    QVBoxLayout *verticalLayout_12;
    QLabel *label_29;
    QHBoxLayout *horizontalLayout_65;
    QComboBox *guiExternalIpFetch;
    QLabel *label_60;
    QSpinBox *guiSecureMemoryPool;
    QSpacerItem *horizontalSpacer_52;
    QHBoxLayout *horizontalLayout_46;
    QLabel *label_40;
    QLineEdit *geoipPath4;
    QPushButton *selectGeoIP4;
    QHBoxLayout *horizontalLayout_78;
    QLabel *label_81;
    QLineEdit *geoipPath6;
    QPushButton *selectGeoIP6;
    QHBoxLayout *horizontalLayout_50;
    QLabel *label_43;
    QLineEdit *sslControlString;
    QPushButton *saveSslControlString;
    QPushButton *testSslControlString;
    QVBoxLayout *settingsVerticalLayout;
    QGroupBox *kernelBox;
    QVBoxLayout *verticalLayout_28;
    QHBoxLayout *horizontalLayout_66;
    QLabel *label_67;
    QComboBox *kernelExternalIpFetch;
    QLabel *label_68;
    QSpinBox *kernelSecureMemoryPool;
    QHBoxLayout *horizontalLayout_20;
    QLabel *kernelPathLabel;
    QSpacerItem *horizontalSpacer_67;
    QSpacerItem *horizontalSpacer_53;
    QSpacerItem *horizontalSpacer_26;
    QSpacerItem *horizontalSpacer_30;
    QSpacerItem *horizontalSpacer_42;
    QHBoxLayout *horizontalLayout_58;
    QLineEdit *kernelPath;
    QPushButton *selectKernelPath;
    QHBoxLayout *horizontalLayout_15;
    QPushButton *activateKernel;
    QLabel *label_17;
    QLineEdit *pid;
    QPushButton *deactivateKernel;
    QHBoxLayout *horizontalLayout_83;
    QLabel *label_42;
    QComboBox *kernelCipherType;
    QLabel *label_87;
    QComboBox *kernelHashType;
    QHBoxLayout *horizontalLayout_23;
    QLabel *label_73;
    QSpinBox *cost;
    QLabel *label_124;
    QComboBox *congestionAlgorithm;
    QCheckBox *secondary_storage;
    QCheckBox *kernelLogEvents;
    QLabel *label_34;
    QComboBox *kernelKeySize;
    QGroupBox *passphraseGroupBox;
    QVBoxLayout *verticalLayout_16;
    QGridLayout *gridLayout;
    spoton_lineedit *passphrase2;
    QRadioButton *question_rb;
    spoton_lineedit *question;
    spoton_lineedit *answer;
    QLabel *label_58;
    QRadioButton *passphrase_rb;
    QLabel *label_74;
    QLineEdit *username;
    QLabel *label_18;
    QLabel *label_55;
    QLabel *label_56;
    QLabel *label_97;
    QLabel *label_98;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label;
    QComboBox *cipherType;
    QLabel *label_14;
    QComboBox *hashType;
    QLabel *label_15;
    QSpinBox *iterationCount;
    QLabel *label_16;
    QSpinBox *saltLength;
    QSpacerItem *horizontalSpacer_11;
    QHBoxLayout *horizontalLayout_3;
    spoton_lineedit *passphrase1;
    QProgressBar *passphrase_strength_indicator;
    QPushButton *setPassphrase;
    QGroupBox *publicKeysBox;
    QVBoxLayout *verticalLayout_49;
    QTableWidget *personal_public_keys;
    QGridLayout *gridLayout_10;
    QLabel *label_92;
    QComboBox *encryptionKeySize;
    QComboBox *signatureKeyType;
    QComboBox *signatureKeySize;
    QLabel *label_46;
    QComboBox *keys;
    QLabel *label_69;
    QComboBox *encryptionKeyType;
    QLabel *label_45;
    QPushButton *regenerate;
    QCheckBox *newKeys;
    QSpacerItem *horizontalSpacer_47;
    QPushButton *delete_key;
    QHBoxLayout *horizontalLayout_11;
    QPushButton *showStatistics;
    QGroupBox *statisticsBox;
    QVBoxLayout *verticalLayout_66;
    QTableView *statistics;
    QSpacerItem *verticalSpacer;
    QWidget *tab_starbeam;
    QVBoxLayout *verticalLayout_39;
    QLabel *label_101;
    QFrame *line_10;
    QScrollArea *scrollArea_4;
    QWidget *scrollAreaWidgetContents_4;
    QVBoxLayout *verticalLayout_43;
    QTabWidget *etpTab;
    QWidget *tab_SB_Magnets;
    QVBoxLayout *verticalLayout_48;
    QHBoxLayout *horizontalLayout_71;
    QToolButton *magnetsActionMenu;
    QSpacerItem *horizontalSpacer_57;
    QTableWidget *etpMagnets;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_42;
    QHBoxLayout *horizontalLayout_59;
    QRadioButton *magnetRadio;
    QTextEdit *etpMagnet;
    QHBoxLayout *horizontalLayout_53;
    QRadioButton *pairRadio;
    QComboBox *generate;
    QSpacerItem *horizontalSpacer_41;
    QFrame *pairFrame;
    QVBoxLayout *verticalLayout_45;
    QGridLayout *gridLayout_7;
    QLabel *label_52;
    QLabel *label_51;
    QComboBox *etpCipherType;
    QLineEdit *etpEncryptionKey;
    QLabel *label_50;
    QLineEdit *etpMacKey;
    QLabel *label_57;
    QComboBox *etpHashType;
    QHBoxLayout *horizontalLayout_57;
    QPushButton *addMagnet;
    QGroupBox *groupBox_8;
    QVBoxLayout *verticalLayout_25;
    QListWidget *novas;
    QLineEdit *receiveNova;
    QHBoxLayout *horizontalLayout_43;
    QLabel *label_90;
    QSpacerItem *horizontalSpacer_40;
    QPushButton *addNova;
    QPushButton *deleteNova;
    QWidget *tab_SB_incoming;
    QVBoxLayout *verticalLayout_44;
    QSplitter *splitter;
    QGroupBox *receivers;
    QVBoxLayout *verticalLayout_41;
    QTableWidget *received;
    QHBoxLayout *horizontalLayout_54;
    QLabel *label_63;
    QLineEdit *destination;
    QPushButton *etpSelectDestination;
    QHBoxLayout *horizontalLayout_55;
    QToolButton *receivedActionMenu;
    QSpacerItem *horizontalSpacer_44;
    QLabel *label_59;
    QSpinBox *etpMaxMosaicSize;
    QLabel *label_117;
    QWidget *tab_SB_Upload;
    QVBoxLayout *verticalLayout_46;
    QGroupBox *groupBox_9;
    QVBoxLayout *verticalLayout_56;
    QLabel *label_91;
    QHBoxLayout *horizontalLayout_44;
    QLabel *label_53;
    QLineEdit *transmittedFile;
    QPushButton *etpSelectFile;
    QTableWidget *addTransmittedMagnets;
    QLabel *label_126;
    QHBoxLayout *horizontalLayout_68;
    QLineEdit *transmitNova;
    QPushButton *generateNova;
    QHBoxLayout *horizontalLayout_69;
    QLabel *label_54;
    QSpinBox *pulseSize;
    QCheckBox *fragment_starbeam;
    QSpacerItem *horizontalSpacer_8;
    QHBoxLayout *horizontalLayout_74;
    QCheckBox *missingLinksCheckBox;
    QLineEdit *missingLinks;
    QPushButton *demagnetizeMissingLinks;
    QPushButton *transmit;
    QSplitter *txmSplitter;
    QTableWidget *transmitted;
    QListWidget *transmittedMagnets;
    QHBoxLayout *horizontalLayout_72;
    QToolButton *transmittedActionMenu;
    QPushButton *rewind;
    QWidget *tab_cultivation;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_121;
    QFrame *line_11;
    QScrollArea *scrollArea_10;
    QWidget *scrollAreaWidgetContents_10;
    QVBoxLayout *verticalLayout_58;
    QHBoxLayout *horizontalLayout_56;
    QCheckBox *activeUrlDistribution;
    QFrame *line_2;
    QLabel *label_104;
    QComboBox *urlDistributionModel;
    QSpacerItem *horizontalSpacer_38;
    QSplitter *urlsVerticalSplitter;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_32;
    QHBoxLayout *horizontalLayout_12;
    QToolButton *urlActionMenu;
    QSpacerItem *horizontalSpacer_39;
    QLabel *label_22;
    QLineEdit *urlName;
    QPushButton *saveUrlName;
    QHBoxLayout *horizontalLayout_4;
    QTableWidget *urlParticipants;
    QGroupBox *urlPolarizers;
    QVBoxLayout *verticalLayout_11;
    QLabel *label_9;
    QTabWidget *urlTab;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_13;
    QTableWidget *downDistillers;
    QWidget *tab_5;
    QVBoxLayout *verticalLayout_8;
    QTableWidget *sharedDistillers;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_17;
    QTableWidget *upDistillers;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_99;
    QLineEdit *domain;
    QFrame *frame_3;
    QHBoxLayout *horizontalLayout_5;
    QCheckBox *downDist;
    QCheckBox *sharedDist;
    QCheckBox *upDist;
    QPushButton *addDistiller;
    QFrame *line;
    QPushButton *deleteDistillers;
    QPushButton *refreshDistillers;
    QWidget *tab_addkey;
    QVBoxLayout *verticalLayout_22;
    QLabel *label_125;
    QFrame *line_13;
    QHBoxLayout *horizontalLayout_27;
    QGroupBox *groupBox_addkey_3;
    QVBoxLayout *verticalLayout_24;
    QVBoxLayout *verticalLayout_75;
    QHBoxLayout *horizontalLayout_38;
    QPushButton *toolButtonCopyToClipboard;
    QSpacerItem *verticalSpacer_13;
    QHBoxLayout *horizontalLayout_62;
    QSpacerItem *horizontalSpacer_21;
    QRadioButton *addFriendEmail;
    QSpacerItem *horizontalSpacer_31;
    QRadioButton *addFriendPublicKeyRadio;
    QSpacerItem *horizontalSpacer_23;
    QSpacerItem *horizontalSpacer_24;
    QTextEdit *friendInformation;
    QHBoxLayout *horizontalLayout_64;
    QSpacerItem *horizontalSpacer_25;
    QPushButton *addFriend;
    QSpacerItem *horizontalSpacer_32;
    QPushButton *clearFriend;
    QWidget *tab_login;
    QVBoxLayout *verticalLayout_60;
    QVBoxLayout *verticalLayout_5;
    QSpacerItem *verticalSpacer_9;
    QLabel *logo;
    QLabel *label_31;
    QLabel *label_100;
    QSpacerItem *verticalSpacer_14;
    QHBoxLayout *horizontalLayout_22;
    QSpacerItem *horizontalSpacer_6;
    QRadioButton *question_rb_authenticate;
    QLabel *label_102;
    QRadioButton *passphrase_rb_authenticate;
    QSpacerItem *horizontalSpacer_14;
    QHBoxLayout *horizontalLayout_32;
    QLabel *passphraseLabel;
    QHBoxLayout *horizontalLayout_25;
    QSpacerItem *horizontalSpacer_15;
    QFormLayout *formLayout;
    QLabel *label_103gb;
    spoton_lineedit *question_authenticate;
    QLabel *label_124gb;
    spoton_lineedit *passphrase;
    QHBoxLayout *horizontalLayout_75;
    QLabel *label_122gb;
    spoton_lineedit *answer_authenticate;
    QLabel *label_103;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_19;
    QHBoxLayout *horizontalLayout_42;
    QSpacerItem *horizontalSpacer_9;
    QPushButton *passphraseButton;
    QSpacerItem *horizontalSpacer_10;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_17;
    QSpacerItem *horizontalSpacer_16;
    QLabel *version;
    QSpacerItem *horizontalSpacer_33;
    QLabel *buildInformation;
    QStatusBar *statusbar;
    QMenuBar *menubar;
    QMenu *menu_File;
    QMenu *menu_View;
    QMenu *menu_Pages;
    QMenu *menu_Tools;
    QMenu *menu_Edit;

    void setupUi(QMainWindow *spoton_mainwindow)
    {
        if (spoton_mainwindow->objectName().isEmpty())
            spoton_mainwindow->setObjectName(QStringLiteral("spoton_mainwindow"));
        spoton_mainwindow->resize(660, 800);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Logo/goldbug.png"), QSize(), QIcon::Normal, QIcon::Off);
        spoton_mainwindow->setWindowIcon(icon);
        action_Quit = new QAction(spoton_mainwindow);
        action_Quit->setObjectName(QStringLiteral("action_Quit"));
        action_Log_Viewer = new QAction(spoton_mainwindow);
        action_Log_Viewer->setObjectName(QStringLiteral("action_Log_Viewer"));
        action_ResetSpotOn = new QAction(spoton_mainwindow);
        action_ResetSpotOn->setObjectName(QStringLiteral("action_ResetSpotOn"));
        action_Rosetta = new QAction(spoton_mainwindow);
        action_Rosetta->setObjectName(QStringLiteral("action_Rosetta"));
        action_Copy = new QAction(spoton_mainwindow);
        action_Copy->setObjectName(QStringLiteral("action_Copy"));
        action_Paste = new QAction(spoton_mainwindow);
        action_Paste->setObjectName(QStringLiteral("action_Paste"));
        action_Export_Public_Keys = new QAction(spoton_mainwindow);
        action_Export_Public_Keys->setObjectName(QStringLiteral("action_Export_Public_Keys"));
        action_Import_Public_Keys = new QAction(spoton_mainwindow);
        action_Import_Public_Keys->setObjectName(QStringLiteral("action_Import_Public_Keys"));
        action_Export_Listeners = new QAction(spoton_mainwindow);
        action_Export_Listeners->setObjectName(QStringLiteral("action_Export_Listeners"));
        action_Import_Neighbors = new QAction(spoton_mainwindow);
        action_Import_Neighbors->setObjectName(QStringLiteral("action_Import_Neighbors"));
        action_StarBeam_Analyzer = new QAction(spoton_mainwindow);
        action_StarBeam_Analyzer->setObjectName(QStringLiteral("action_StarBeam_Analyzer"));
        action_Minimal_Display = new QAction(spoton_mainwindow);
        action_Minimal_Display->setObjectName(QStringLiteral("action_Minimal_Display"));
        action_Minimal_Display->setCheckable(true);
        action_File_Encryption = new QAction(spoton_mainwindow);
        action_File_Encryption->setObjectName(QStringLiteral("action_File_Encryption"));
        actionClear_Clipboard_Buffer = new QAction(spoton_mainwindow);
        actionClear_Clipboard_Buffer->setObjectName(QStringLiteral("actionClear_Clipboard_Buffer"));
        action_Poptastic_Settings = new QAction(spoton_mainwindow);
        action_Poptastic_Settings->setObjectName(QStringLiteral("action_Poptastic_Settings"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/generic/poptastic.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Poptastic_Settings->setIcon(icon1);
        action_Options = new QAction(spoton_mainwindow);
        action_Options->setObjectName(QStringLiteral("action_Options"));
        action_About = new QAction(spoton_mainwindow);
        action_About->setObjectName(QStringLiteral("action_About"));
        action_About->setIcon(icon);
        action_Echo_Key_Share = new QAction(spoton_mainwindow);
        action_Echo_Key_Share->setObjectName(QStringLiteral("action_Echo_Key_Share"));
        action_Purge_Ephemeral_Keys = new QAction(spoton_mainwindow);
        action_Purge_Ephemeral_Keys->setObjectName(QStringLiteral("action_Purge_Ephemeral_Keys"));
        action_Statistics_Window = new QAction(spoton_mainwindow);
        action_Statistics_Window->setObjectName(QStringLiteral("action_Statistics_Window"));
        action_Neighbor_Summary_Panel = new QAction(spoton_mainwindow);
        action_Neighbor_Summary_Panel->setObjectName(QStringLiteral("action_Neighbor_Summary_Panel"));
        action_Neighbor_Summary_Panel->setCheckable(true);
        action_Neighbor_Summary_Panel->setChecked(true);
        action_RSS = new QAction(spoton_mainwindow);
        action_RSS->setObjectName(QStringLiteral("action_RSS"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/generic/rss.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_RSS->setIcon(icon2);
        action_Buzz = new QAction(spoton_mainwindow);
        action_Buzz->setObjectName(QStringLiteral("action_Buzz"));
        action_Buzz->setCheckable(true);
        action_Buzz->setChecked(true);
        action_Listeners = new QAction(spoton_mainwindow);
        action_Listeners->setObjectName(QStringLiteral("action_Listeners"));
        action_Listeners->setCheckable(true);
        action_Listeners->setChecked(true);
        action_Neighbors = new QAction(spoton_mainwindow);
        action_Neighbors->setObjectName(QStringLiteral("action_Neighbors"));
        action_Neighbors->setCheckable(true);
        action_Neighbors->setChecked(true);
        action_Search = new QAction(spoton_mainwindow);
        action_Search->setObjectName(QStringLiteral("action_Search"));
        action_Search->setCheckable(true);
        action_Search->setChecked(true);
        action_StarBeam = new QAction(spoton_mainwindow);
        action_StarBeam->setObjectName(QStringLiteral("action_StarBeam"));
        action_StarBeam->setCheckable(true);
        action_StarBeam->setChecked(true);
        action_Urls = new QAction(spoton_mainwindow);
        action_Urls->setObjectName(QStringLiteral("action_Urls"));
        action_Urls->setCheckable(true);
        action_Urls->setChecked(true);
        action_Vacuum_Databases = new QAction(spoton_mainwindow);
        action_Vacuum_Databases->setObjectName(QStringLiteral("action_Vacuum_Databases"));
        action_Notifications_Window = new QAction(spoton_mainwindow);
        action_Notifications_Window->setObjectName(QStringLiteral("action_Notifications_Window"));
        action_New_Global_Name = new QAction(spoton_mainwindow);
        action_New_Global_Name->setObjectName(QStringLiteral("action_New_Global_Name"));
        action_Documentation = new QAction(spoton_mainwindow);
        action_Documentation->setObjectName(QStringLiteral("action_Documentation"));
        centralwidget = new QWidget(spoton_mainwindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout_3 = new QVBoxLayout(centralwidget);
        verticalLayout_3->setSpacing(5);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(5, 5, 5, 5);
        tab = new spoton_tabwidget(centralwidget);
        tab->setObjectName(QStringLiteral("tab"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tab->sizePolicy().hasHeightForWidth());
        tab->setSizePolicy(sizePolicy);
        tab->setTabPosition(QTabWidget::East);
        tab->setTabShape(QTabWidget::Rounded);
        tab->setIconSize(QSize(48, 48));
        tab->setElideMode(Qt::ElideLeft);
        tab->setUsesScrollButtons(false);
        tab_irc = new QWidget();
        tab_irc->setObjectName(QStringLiteral("tab_irc"));
        verticalLayout_9 = new QVBoxLayout(tab_irc);
        verticalLayout_9->setSpacing(5);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(5, 5, 5, 5);
        label_30 = new QLabel(tab_irc);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setMinimumSize(QSize(0, 40));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label_30->setFont(font);
        label_30->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:reflect, x1:0.023, y1:0.988636, x2:0.028, y2:0.011, stop:0 rgba(218, 232, 255, 255), stop:1 rgba(170, 85, 255, 255));\n"
"color: rgb(255, 255, 255);\n"
""));
        label_30->setIndent(5);

        verticalLayout_9->addWidget(label_30);

        line_3 = new QFrame(tab_irc);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout_9->addWidget(line_3);

        scrollArea_5 = new QScrollArea(tab_irc);
        scrollArea_5->setObjectName(QStringLiteral("scrollArea_5"));
        scrollArea_5->setFrameShape(QFrame::NoFrame);
        scrollArea_5->setWidgetResizable(true);
        scrollAreaWidgetContents_5 = new QWidget();
        scrollAreaWidgetContents_5->setObjectName(QStringLiteral("scrollAreaWidgetContents_5"));
        scrollAreaWidgetContents_5->setGeometry(QRect(0, 0, 578, 682));
        verticalLayout_54 = new QVBoxLayout(scrollAreaWidgetContents_5);
        verticalLayout_54->setSpacing(5);
        verticalLayout_54->setObjectName(QStringLiteral("verticalLayout_54"));
        verticalLayout_54->setContentsMargins(5, 5, 5, 5);
        horizontalLayout_41 = new QHBoxLayout();
        horizontalLayout_41->setSpacing(5);
        horizontalLayout_41->setObjectName(QStringLiteral("horizontalLayout_41"));
        label_32 = new QLabel(scrollAreaWidgetContents_5);
        label_32->setObjectName(QStringLiteral("label_32"));

        horizontalLayout_41->addWidget(label_32);

        buzzName = new QLineEdit(scrollAreaWidgetContents_5);
        buzzName->setObjectName(QStringLiteral("buzzName"));

        horizontalLayout_41->addWidget(buzzName);

        saveBuzzName = new QPushButton(scrollAreaWidgetContents_5);
        saveBuzzName->setObjectName(QStringLiteral("saveBuzzName"));
        saveBuzzName->setStyleSheet(QLatin1String("QPushButton {\n"
" border: 2px solid gray;\n"
" background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                   stop: 0 #E0E0E0, stop: 1 #FFFFFF);\n"
" border-radius: 5px;\n"
" margin: 2px;\n"
" padding: 2px;\n"
" }\n"
"\n"
"QPushButton:hover { \n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                   stop: 0 rgb(254,229,172), stop: 1 #FFFFFF);\n"
"background-position: top center; } \n"
"\n"
"QPushButton:pressed {\n"
"     background-color: darkgrey;\n"
"     border-style: inset;\n"
" }"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/nuvola/ok.png"), QSize(), QIcon::Normal, QIcon::Off);
        saveBuzzName->setIcon(icon3);

        horizontalLayout_41->addWidget(saveBuzzName);


        verticalLayout_54->addLayout(horizontalLayout_41);

        horizontalLayout_34 = new QHBoxLayout();
        horizontalLayout_34->setSpacing(5);
        horizontalLayout_34->setObjectName(QStringLiteral("horizontalLayout_34"));
        label_82 = new QLabel(scrollAreaWidgetContents_5);
        label_82->setObjectName(QStringLiteral("label_82"));

        horizontalLayout_34->addWidget(label_82);

        commonBuzzChannels = new QComboBox(scrollAreaWidgetContents_5);
        commonBuzzChannels->insertItems(0, QStringList()
         << QStringLiteral("Spot-On Developer Channel")
        );
        commonBuzzChannels->setObjectName(QStringLiteral("commonBuzzChannels"));
        commonBuzzChannels->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        horizontalLayout_34->addWidget(commonBuzzChannels);

        buzz_details = new QPushButton(scrollAreaWidgetContents_5);
        buzz_details->setObjectName(QStringLiteral("buzz_details"));
        buzz_details->setCheckable(true);

        horizontalLayout_34->addWidget(buzz_details);

        horizontalSpacer_64 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_34->addItem(horizontalSpacer_64);


        verticalLayout_54->addLayout(horizontalLayout_34);

        buzz_frame = new QFrame(scrollAreaWidgetContents_5);
        buzz_frame->setObjectName(QStringLiteral("buzz_frame"));
        verticalLayout_7 = new QVBoxLayout(buzz_frame);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        horizontalLayout_33 = new QHBoxLayout();
        horizontalLayout_33->setSpacing(5);
        horizontalLayout_33->setObjectName(QStringLiteral("horizontalLayout_33"));
        label_33 = new QLabel(buzz_frame);
        label_33->setObjectName(QStringLiteral("label_33"));

        horizontalLayout_33->addWidget(label_33);

        channel = new QLineEdit(buzz_frame);
        channel->setObjectName(QStringLiteral("channel"));

        horizontalLayout_33->addWidget(channel);

        label_72 = new QLabel(buzz_frame);
        label_72->setObjectName(QStringLiteral("label_72"));

        horizontalLayout_33->addWidget(label_72);

        demagnetize = new QLineEdit(buzz_frame);
        demagnetize->setObjectName(QStringLiteral("demagnetize"));

        horizontalLayout_33->addWidget(demagnetize);


        verticalLayout_7->addLayout(horizontalLayout_33);

        horizontalLayout_40 = new QHBoxLayout();
        horizontalLayout_40->setSpacing(5);
        horizontalLayout_40->setObjectName(QStringLiteral("horizontalLayout_40"));
        label_44 = new QLabel(buzz_frame);
        label_44->setObjectName(QStringLiteral("label_44"));

        horizontalLayout_40->addWidget(label_44);

        buzzIterationCount = new QSpinBox(buzz_frame);
        buzzIterationCount->setObjectName(QStringLiteral("buzzIterationCount"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(buzzIterationCount->sizePolicy().hasHeightForWidth());
        buzzIterationCount->setSizePolicy(sizePolicy1);
        buzzIterationCount->setMinimum(10000);
        buzzIterationCount->setMaximum(999999999);

        horizontalLayout_40->addWidget(buzzIterationCount);

        label_36 = new QLabel(buzz_frame);
        label_36->setObjectName(QStringLiteral("label_36"));

        horizontalLayout_40->addWidget(label_36);

        channelType = new QComboBox(buzz_frame);
        channelType->setObjectName(QStringLiteral("channelType"));
        channelType->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        horizontalLayout_40->addWidget(channelType);


        verticalLayout_7->addLayout(horizontalLayout_40);

        horizontalLayout_61 = new QHBoxLayout();
        horizontalLayout_61->setSpacing(5);
        horizontalLayout_61->setObjectName(QStringLiteral("horizontalLayout_61"));
        label_61 = new QLabel(buzz_frame);
        label_61->setObjectName(QStringLiteral("label_61"));

        horizontalLayout_61->addWidget(label_61);

        buzzHashKey = new QLineEdit(buzz_frame);
        buzzHashKey->setObjectName(QStringLiteral("buzzHashKey"));

        horizontalLayout_61->addWidget(buzzHashKey);

        label_37 = new QLabel(buzz_frame);
        label_37->setObjectName(QStringLiteral("label_37"));

        horizontalLayout_61->addWidget(label_37);

        channelSalt = new QLineEdit(buzz_frame);
        channelSalt->setObjectName(QStringLiteral("channelSalt"));

        horizontalLayout_61->addWidget(channelSalt);

        label_62 = new QLabel(buzz_frame);
        label_62->setObjectName(QStringLiteral("label_62"));

        horizontalLayout_61->addWidget(label_62);

        buzzHashType = new QComboBox(buzz_frame);
        buzzHashType->setObjectName(QStringLiteral("buzzHashType"));
        buzzHashType->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        horizontalLayout_61->addWidget(buzzHashType);

        buzzActions = new QComboBox(buzz_frame);
        buzzActions->setObjectName(QStringLiteral("buzzActions"));
        buzzActions->setStyleSheet(QStringLiteral(""));
        buzzActions->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        horizontalLayout_61->addWidget(buzzActions);


        verticalLayout_7->addLayout(horizontalLayout_61);

        horizontalLayout_45 = new QHBoxLayout();
        horizontalLayout_45->setObjectName(QStringLiteral("horizontalLayout_45"));
        horizontalLayout_45->setContentsMargins(-1, 0, -1, -1);
        label_49 = new QLabel(buzz_frame);
        label_49->setObjectName(QStringLiteral("label_49"));

        horizontalLayout_45->addWidget(label_49);

        favorites = new QComboBox(buzz_frame);
        favorites->insertItems(0, QStringList()
         << QStringLiteral("Empty")
        );
        favorites->setObjectName(QStringLiteral("favorites"));
        sizePolicy1.setHeightForWidth(favorites->sizePolicy().hasHeightForWidth());
        favorites->setSizePolicy(sizePolicy1);
        favorites->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        horizontalLayout_45->addWidget(favorites);


        verticalLayout_7->addLayout(horizontalLayout_45);


        verticalLayout_54->addWidget(buzz_frame);

        horizontalLayout_28 = new QHBoxLayout();
        horizontalLayout_28->setObjectName(QStringLiteral("horizontalLayout_28"));
        horizontalLayout_28->setContentsMargins(-1, 0, -1, -1);
        buzzTools = new QComboBox(scrollAreaWidgetContents_5);
        buzzTools->setObjectName(QStringLiteral("buzzTools"));
        buzzTools->setMinimumSize(QSize(0, 49));
        buzzTools->setStyleSheet(QLatin1String("QComboBox#buzzTools {\n"
" border: 2px solid gray;\n"
" background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                   stop: 0 #E0E0E0, stop: 1 #FFFFFF);\n"
" border-radius: 5px;\n"
" margin: 2px;\n"
" padding: 2px;\n"
" \n"
" }\n"
"\n"
"\n"
"QComboBox#buzzTools:hover { \n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                   stop: 0 rgb(254,229,172), stop: 1 #FFFFFF);\n"
"background-position: top center; } "));
        buzzTools->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        horizontalLayout_28->addWidget(buzzTools);

        join = new QPushButton(scrollAreaWidgetContents_5);
        join->setObjectName(QStringLiteral("join"));
        join->setStyleSheet(QLatin1String("QPushButton {\n"
" border: 2px solid gray;\n"
" background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                   stop: 0 #E0E0E0, stop: 1 #FFFFFF);\n"
" border-radius: 5px;\n"
" margin: 2px;\n"
" padding: 2px;\n"
" }\n"
"\n"
"\n"
"QPushButton:hover { \n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                   stop: 0 rgb(254,229,172), stop: 1 #FFFFFF);\n"
"background-position: top center; }\n"
"\n"
"QPushButton:pressed {\n"
"     background-color: darkgrey;\n"
"     border-style: inset;\n"
" } "));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/nuvola/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        join->setIcon(icon4);
        join->setIconSize(QSize(40, 40));

        horizontalLayout_28->addWidget(join);


        verticalLayout_54->addLayout(horizontalLayout_28);

        buzzTab = new spoton_tabwidget(scrollAreaWidgetContents_5);
        buzzTab->setObjectName(QStringLiteral("buzzTab"));
        buzzTab->setTabsClosable(true);

        verticalLayout_54->addWidget(buzzTab);

        scrollArea_5->setWidget(scrollAreaWidgetContents_5);

        verticalLayout_9->addWidget(scrollArea_5);

        QIcon icon5;
        icon5.addFile(QStringLiteral(":/nuvola/buzz_t.png"), QSize(), QIcon::Normal, QIcon::Off);
        tab->addTab(tab_irc, icon5, QString());
        tab_chat = new QWidget();
        tab_chat->setObjectName(QStringLiteral("tab_chat"));
        verticalLayout_18 = new QVBoxLayout(tab_chat);
        verticalLayout_18->setSpacing(5);
        verticalLayout_18->setObjectName(QStringLiteral("verticalLayout_18"));
        verticalLayout_18->setContentsMargins(5, 5, 5, 5);
        layouttab = new QWidget(tab_chat);
        layouttab->setObjectName(QStringLiteral("layouttab"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(layouttab->sizePolicy().hasHeightForWidth());
        layouttab->setSizePolicy(sizePolicy2);
        verticalLayout_72 = new QVBoxLayout(layouttab);
        verticalLayout_72->setSpacing(3);
        verticalLayout_72->setObjectName(QStringLiteral("verticalLayout_72"));
        verticalLayout_72->setContentsMargins(0, 0, 0, 0);
        label_26 = new QLabel(layouttab);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setMinimumSize(QSize(0, 40));
        label_26->setFont(font);
        label_26->setAutoFillBackground(false);
        label_26->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:reflect, x1:0.023, y1:0.988636, x2:0.028, y2:0.011, stop:0 rgba(218, 232, 255, 255), stop:1 rgba(170, 85, 255, 255));\n"
"\n"
"color: rgb(255, 255, 255);\n"
"\n"
"\n"
""));
        label_26->setMargin(0);
        label_26->setIndent(5);

        verticalLayout_72->addWidget(label_26);

        line_7 = new QFrame(layouttab);
        line_7->setObjectName(QStringLiteral("line_7"));
        line_7->setFrameShape(QFrame::HLine);
        line_7->setFrameShadow(QFrame::Sunken);

        verticalLayout_72->addWidget(line_7);

        splitter_4 = new QSplitter(layouttab);
        splitter_4->setObjectName(QStringLiteral("splitter_4"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(splitter_4->sizePolicy().hasHeightForWidth());
        splitter_4->setSizePolicy(sizePolicy3);
        splitter_4->setOrientation(Qt::Vertical);
        splitter_4->setChildrenCollapsible(false);
        splitter_5 = new QSplitter(splitter_4);
        splitter_5->setObjectName(QStringLiteral("splitter_5"));
        splitter_5->setOrientation(Qt::Vertical);
        splitter_5->setChildrenCollapsible(false);
        groupBox = new QGroupBox(splitter_5);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout_14 = new QVBoxLayout(groupBox);
        verticalLayout_14->setSpacing(3);
        verticalLayout_14->setObjectName(QStringLiteral("verticalLayout_14"));
        verticalLayout_14->setContentsMargins(3, 3, 3, 3);
        messages = new QTextBrowser(groupBox);
        messages->setObjectName(QStringLiteral("messages"));
        messages->setAutoFillBackground(false);
        messages->setFrameShape(QFrame::NoFrame);
        messages->setTabChangesFocus(true);
        messages->setOpenExternalLinks(true);
        messages->setOpenLinks(false);

        verticalLayout_14->addWidget(messages);

        message = new spoton_textedit(groupBox);
        message->setObjectName(QStringLiteral("message"));
        message->setMaximumSize(QSize(16777215, 50));
        message->setStyleSheet(QLatin1String("background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                   stop: 0 #ffffc3, stop: 1 #FFFFFF);\n"
"\n"
"\n"
""));
        message->setTabChangesFocus(true);
        message->setAcceptRichText(false);

        verticalLayout_14->addWidget(message);

        horizontalLayout_62gb = new QHBoxLayout();
        horizontalLayout_62gb->setSpacing(2);
        horizontalLayout_62gb->setObjectName(QStringLiteral("horizontalLayout_62gb"));
        clearMessages = new QPushButton(groupBox);
        clearMessages->setObjectName(QStringLiteral("clearMessages"));
        clearMessages->setStyleSheet(QLatin1String("QPushButton {\n"
" border: 2px solid gray;\n"
" background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                   stop: 0 #E0E0E0, stop: 1 #FFFFFF);\n"
" border-radius: 5px;\n"
" margin: 2px;\n"
" padding: 2px;\n"
" }\n"
"\n"
"\n"
"\n"
"QPushButton:hover { \n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                   stop: 0 rgb(254,229,172), stop: 1 #FFFFFF);\n"
"background-position: top center; } \n"
"\n"
"QPushButton:pressed {\n"
"     background-color: darkgrey;\n"
"     border-style: inset;\n"
" }"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/nuvola/clear.png"), QSize(), QIcon::Normal, QIcon::Off);
        clearMessages->setIcon(icon6);
        clearMessages->setIconSize(QSize(40, 40));
        clearMessages->setFlat(false);

        horizontalLayout_62gb->addWidget(clearMessages);

        status = new QComboBox(groupBox);
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/nuvola/away.png"), QSize(), QIcon::Normal, QIcon::Off);
        status->addItem(icon7, QString());
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/nuvola/busy.png"), QSize(), QIcon::Normal, QIcon::Off);
        status->addItem(icon8, QString());
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/nuvola/chat.png"), QSize(), QIcon::Normal, QIcon::Off);
        status->addItem(icon9, QString());
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/nuvola/offline.png"), QSize(), QIcon::Normal, QIcon::Off);
        status->addItem(icon10, QString());
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/nuvola/online.png"), QSize(), QIcon::Normal, QIcon::Off);
        status->addItem(icon11, QString());
        status->setObjectName(QStringLiteral("status"));
        status->setStyleSheet(QLatin1String("QComboBox#status {\n"
" border: 2px solid gray;\n"
" background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                   stop: 0 #E0E0E0, stop: 1 #FFFFFF);\n"
" border-radius: 5px;\n"
" margin: 2px;\n"
" padding: 2px;\n"
" \n"
" }\n"
"\n"
"\n"
"QComboBox#status:hover { \n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                   stop: 0 rgb(254,229,172), stop: 1 #FFFFFF);\n"
"background-position: top center; } "));
        status->setMaxCount(2100);
        status->setSizeAdjustPolicy(QComboBox::AdjustToContents);
        status->setIconSize(QSize(20, 40));

        horizontalLayout_62gb->addWidget(status);

        sendMessage = new QPushButton(groupBox);
        sendMessage->setObjectName(QStringLiteral("sendMessage"));
        sizePolicy1.setHeightForWidth(sendMessage->sizePolicy().hasHeightForWidth());
        sendMessage->setSizePolicy(sizePolicy1);
        sendMessage->setStyleSheet(QLatin1String("QPushButton {\n"
" border: 2px solid gray;\n"
" background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                   stop: 0 #E0E0E0, stop: 1 #FFFFFF);\n"
" border-radius: 5px;\n"
" margin: 2px;\n"
" padding: 2px;\n"
" }\n"
"\n"
"\n"
"\n"
"QPushButton:hover { \n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                   stop: 0 rgb(254,229,172), stop: 1 #FFFFFF);\n"
"background-position: top center; } \n"
"\n"
"QPushButton:pressed {\n"
"     background-color: darkgrey;\n"
"     border-style: inset;\n"
" }"));
        sendMessage->setIcon(icon3);
        sendMessage->setIconSize(QSize(40, 40));

        horizontalLayout_62gb->addWidget(sendMessage);


        verticalLayout_14->addLayout(horizontalLayout_62gb);

        custom = new QTextEdit(groupBox);
        custom->setObjectName(QStringLiteral("custom"));
        custom->setMaximumSize(QSize(16777215, 50));
        custom->setTabChangesFocus(true);
        custom->setAcceptRichText(false);

        verticalLayout_14->addWidget(custom);

        splitter_5->addWidget(groupBox);
        splitter_4->addWidget(splitter_5);
        groupBox_11 = new QGroupBox(splitter_4);
        groupBox_11->setObjectName(QStringLiteral("groupBox_11"));
        verticalLayout_73 = new QVBoxLayout(groupBox_11);
        verticalLayout_73->setSpacing(3);
        verticalLayout_73->setObjectName(QStringLiteral("verticalLayout_73"));
        verticalLayout_73->setContentsMargins(3, 3, 3, 3);
        chatHorizontalSplitter = new QSplitter(groupBox_11);
        chatHorizontalSplitter->setObjectName(QStringLiteral("chatHorizontalSplitter"));
        chatHorizontalSplitter->setFrameShape(QFrame::StyledPanel);
        chatHorizontalSplitter->setFrameShadow(QFrame::Raised);
        chatHorizontalSplitter->setLineWidth(7);
        chatHorizontalSplitter->setOrientation(Qt::Horizontal);
        participants = new QTableWidget(chatHorizontalSplitter);
        if (participants->columnCount() < 9)
            participants->setColumnCount(9);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        participants->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        participants->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        participants->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        participants->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        participants->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        participants->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        participants->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        participants->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        participants->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        participants->setObjectName(QStringLiteral("participants"));
        participants->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        participants->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        participants->setSelectionBehavior(QAbstractItemView::SelectRows);
        participants->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
        participants->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        participants->setShowGrid(true);
        participants->setGridStyle(Qt::DotLine);
        participants->setSortingEnabled(true);
        chatHorizontalSplitter->addWidget(participants);
        participants->horizontalHeader()->setDefaultSectionSize(125);
        participants->horizontalHeader()->setMinimumSectionSize(125);
        participants->horizontalHeader()->setStretchLastSection(true);
        participants->verticalHeader()->setVisible(false);
        layoutWidget1_2 = new QWidget(chatHorizontalSplitter);
        layoutWidget1_2->setObjectName(QStringLiteral("layoutWidget1_2"));
        verticalLayout_74 = new QVBoxLayout(layoutWidget1_2);
        verticalLayout_74->setSpacing(3);
        verticalLayout_74->setObjectName(QStringLiteral("verticalLayout_74"));
        verticalLayout_74->setContentsMargins(0, 0, 0, 0);
        line_17 = new QFrame(layoutWidget1_2);
        line_17->setObjectName(QStringLiteral("line_17"));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(line_17->sizePolicy().hasHeightForWidth());
        line_17->setSizePolicy(sizePolicy4);
        line_17->setLineWidth(0);
        line_17->setFrameShape(QFrame::VLine);
        line_17->setFrameShadow(QFrame::Sunken);

        verticalLayout_74->addWidget(line_17);

        label_5 = new QLabel(layoutWidget1_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setAlignment(Qt::AlignCenter);

        verticalLayout_74->addWidget(label_5);

        nodeName = new QLineEdit(layoutWidget1_2);
        nodeName->setObjectName(QStringLiteral("nodeName"));
        nodeName->setAlignment(Qt::AlignCenter);

        verticalLayout_74->addWidget(nodeName);

        saveNodeName = new QPushButton(layoutWidget1_2);
        saveNodeName->setObjectName(QStringLiteral("saveNodeName"));
        saveNodeName->setStyleSheet(QLatin1String("QPushButton {\n"
" border: 2px solid gray;\n"
" background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                   stop: 0 #E0E0E0, stop: 1 #FFFFFF);\n"
" border-radius: 5px;\n"
" margin: 2px;\n"
" padding: 2px;\n"
" }\n"
"\n"
"\n"
"QPushButton:hover { \n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                   stop: 0 rgb(254,229,172), stop: 1 #FFFFFF);\n"
"background-position: top center; } \n"
"\n"
"QPushButton:pressed {\n"
"     background-color: darkgrey;\n"
"     border-style: inset;\n"
" }\n"
""));
        saveNodeName->setIcon(icon3);

        verticalLayout_74->addWidget(saveNodeName);

        hideOfflineParticipants = new QCheckBox(layoutWidget1_2);
        hideOfflineParticipants->setObjectName(QStringLiteral("hideOfflineParticipants"));

        verticalLayout_74->addWidget(hideOfflineParticipants);

        line_14 = new QFrame(layoutWidget1_2);
        line_14->setObjectName(QStringLiteral("line_14"));
        sizePolicy4.setHeightForWidth(line_14->sizePolicy().hasHeightForWidth());
        line_14->setSizePolicy(sizePolicy4);
        line_14->setLineWidth(0);
        line_14->setFrameShape(QFrame::VLine);
        line_14->setFrameShadow(QFrame::Sunken);

        verticalLayout_74->addWidget(line_14);

        chatHorizontalSplitter->addWidget(layoutWidget1_2);

        verticalLayout_73->addWidget(chatHorizontalSplitter);

        chatActionMenu = new QToolButton(groupBox_11);
        chatActionMenu->setObjectName(QStringLiteral("chatActionMenu"));
        chatActionMenu->setStyleSheet(QLatin1String("QPushButton {\n"
" border: 2px solid gray;\n"
" background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                   stop: 0 #E0E0E0, stop: 1 #FFFFFF);\n"
" border-radius: 5px;\n"
" margin: 2px;\n"
" padding: 2px;\n"
" }\n"
"\n"
"\n"
"QPushButton:hover { \n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                   stop: 0 rgb(254,229,172), stop: 1 #FFFFFF);\n"
"background-position: top center; } \n"
"\n"
"QPushButton:pressed {\n"
"     background-color: darkgrey;\n"
"     border-style: inset;\n"
" }\n"
""));
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/generic/menu.png"), QSize(), QIcon::Normal, QIcon::Off);
        chatActionMenu->setIcon(icon12);
        chatActionMenu->setPopupMode(QToolButton::MenuButtonPopup);
        chatActionMenu->setAutoRaise(true);

        verticalLayout_73->addWidget(chatActionMenu);

        splitter_4->addWidget(groupBox_11);

        verticalLayout_72->addWidget(splitter_4);


        verticalLayout_18->addWidget(layouttab);

        QIcon icon13;
        icon13.addFile(QStringLiteral(":/nuvola/chat_t.png"), QSize(), QIcon::Normal, QIcon::Off);
        tab->addTab(tab_chat, icon13, QString());
        tab_email = new QWidget();
        tab_email->setObjectName(QStringLiteral("tab_email"));
        verticalLayout_26 = new QVBoxLayout(tab_email);
        verticalLayout_26->setSpacing(5);
        verticalLayout_26->setObjectName(QStringLiteral("verticalLayout_26"));
        verticalLayout_26->setContentsMargins(5, 5, 5, 5);
        label_35 = new QLabel(tab_email);
        label_35->setObjectName(QStringLiteral("label_35"));
        label_35->setMinimumSize(QSize(0, 40));
        label_35->setFont(font);
        label_35->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:reflect, x1:0.023, y1:0.988636, x2:0.028, y2:0.011, stop:0 rgba(218, 232, 255, 255), stop:1 rgba(170, 85, 255, 255));\n"
"color: rgb(255, 255, 255);"));
        label_35->setIndent(5);

        verticalLayout_26->addWidget(label_35);

        line_4 = new QFrame(tab_email);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        verticalLayout_26->addWidget(line_4);

        scrollArea_6 = new QScrollArea(tab_email);
        scrollArea_6->setObjectName(QStringLiteral("scrollArea_6"));
        scrollArea_6->setFrameShape(QFrame::NoFrame);
        scrollArea_6->setWidgetResizable(true);
        scrollAreaWidgetContents_6 = new QWidget();
        scrollAreaWidgetContents_6->setObjectName(QStringLiteral("scrollAreaWidgetContents_6"));
        scrollAreaWidgetContents_6->setGeometry(QRect(0, 0, 698, 668));
        verticalLayout_55 = new QVBoxLayout(scrollAreaWidgetContents_6);
        verticalLayout_55->setSpacing(5);
        verticalLayout_55->setObjectName(QStringLiteral("verticalLayout_55"));
        verticalLayout_55->setContentsMargins(5, 5, 5, 5);
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(5);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalSpacer_17 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_17);

        refreshMail = new QPushButton(scrollAreaWidgetContents_6);
        refreshMail->setObjectName(QStringLiteral("refreshMail"));
        QSizePolicy sizePolicy5(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(refreshMail->sizePolicy().hasHeightForWidth());
        refreshMail->setSizePolicy(sizePolicy5);
        refreshMail->setMinimumSize(QSize(0, 0));
        refreshMail->setStyleSheet(QLatin1String("QPushButton {\n"
" border: 2px solid gray;\n"
" background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                   stop: 0 #E0E0E0, stop: 1 #FFFFFF);\n"
" border-radius: 5px;\n"
" margin: 2px;\n"
" padding: 2px;\n"
" }\n"
"\n"
"\n"
"QPushButton:hover { \n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                   stop: 0 rgb(254,229,172), stop: 1 #FFFFFF);\n"
"background-position: top center; } \n"
"\n"
"\n"
"QPushButton:pressed {\n"
"     background-color: darkgrey;\n"
"     border-style: inset;\n"
" }"));
        QIcon icon14;
        icon14.addFile(QStringLiteral(":/nuvola/refresh.png"), QSize(), QIcon::Normal, QIcon::Off);
        refreshMail->setIcon(icon14);
        refreshMail->setIconSize(QSize(40, 40));

        horizontalLayout_8->addWidget(refreshMail);

        retrieveMail = new QPushButton(scrollAreaWidgetContents_6);
        retrieveMail->setObjectName(QStringLiteral("retrieveMail"));
        retrieveMail->setMinimumSize(QSize(0, 0));
        retrieveMail->setStyleSheet(QLatin1String("QPushButton {\n"
" border: 2px solid gray;\n"
" background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                   stop: 0 #E0E0E0, stop: 1 #FFFFFF);\n"
" border-radius: 5px;\n"
" margin: 2px;\n"
" padding: 2px;\n"
" }\n"
"\n"
"\n"
"\n"
"QPushButton:hover { \n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                   stop: 0 rgb(254,229,172), stop: 1 #FFFFFF);\n"
"background-position: top center; } \n"
"\n"
"QPushButton:pressed {\n"
"     background-color: darkgrey;\n"
"     border-style: inset;\n"
" }"));
        QIcon icon15;
        icon15.addFile(QStringLiteral(":/nuvola/down.png"), QSize(), QIcon::Normal, QIcon::Off);
        retrieveMail->setIcon(icon15);
        retrieveMail->setIconSize(QSize(40, 40));

        horizontalLayout_8->addWidget(retrieveMail);

        emptyTrash = new QPushButton(scrollAreaWidgetContents_6);
        emptyTrash->setObjectName(QStringLiteral("emptyTrash"));
        emptyTrash->setMinimumSize(QSize(0, 0));
        emptyTrash->setStyleSheet(QLatin1String("QPushButton {\n"
" border: 2px solid gray;\n"
" background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                   stop: 0 #E0E0E0, stop: 1 #FFFFFF);\n"
" border-radius: 5px;\n"
" margin: 2px;\n"
" padding: 2px;\n"
" }\n"
"\n"
"\n"
"QPushButton:hover { \n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                   stop: 0 rgb(254,229,172), stop: 1 #FFFFFF);\n"
"background-position: top center; } \n"
"\n"
"QPushButton:pressed {\n"
"     background-color: darkgrey;\n"
"     border-style: inset;\n"
" }"));
        QIcon icon16;
        icon16.addFile(QStringLiteral(":/nuvola/empty-trash.png"), QSize(), QIcon::Normal, QIcon::Off);
        emptyTrash->setIcon(icon16);
        emptyTrash->setIconSize(QSize(40, 40));

        horizontalLayout_8->addWidget(emptyTrash);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_7);


        verticalLayout_55->addLayout(horizontalLayout_8);

        mailTab = new QTabWidget(scrollAreaWidgetContents_6);
        mailTab->setObjectName(QStringLiteral("mailTab"));
        mailTab->setTabShape(QTabWidget::Rounded);
        mailTab->setIconSize(QSize(40, 40));
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        horizontalLayout = new QHBoxLayout(tab_4);
        horizontalLayout->setSpacing(5);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(5, 5, 5, 5);
        emailSplitter = new QSplitter(tab_4);
        emailSplitter->setObjectName(QStringLiteral("emailSplitter"));
        emailSplitter->setOrientation(Qt::Horizontal);
        verticalLayoutWidget_2 = new QWidget(emailSplitter);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayout_69 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_69->setSpacing(5);
        verticalLayout_69->setObjectName(QStringLiteral("verticalLayout_69"));
        verticalLayout_69->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_85 = new QHBoxLayout();
        horizontalLayout_85->setObjectName(QStringLiteral("horizontalLayout_85"));
        folder = new QComboBox(verticalLayoutWidget_2);
        QIcon icon17;
        icon17.addFile(QStringLiteral(":/nuvola/inbox.png"), QSize(), QIcon::Normal, QIcon::Off);
        folder->addItem(icon17, QString());
        QIcon icon18;
        icon18.addFile(QStringLiteral(":/nuvola/read.png"), QSize(), QIcon::Normal, QIcon::Off);
        folder->addItem(icon18, QString());
        QIcon icon19;
        icon19.addFile(QStringLiteral(":/nuvola/full-trash.png"), QSize(), QIcon::Normal, QIcon::Off);
        folder->addItem(icon19, QString());
        folder->setObjectName(QStringLiteral("folder"));
        folder->setStyleSheet(QLatin1String("QPushButton {\n"
" border: 2px solid gray;\n"
" background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                   stop: 0 #E0E0E0, stop: 1 #FFFFFF);\n"
" border-radius: 5px;\n"
" margin: 2px;\n"
" padding: 2px;\n"
" }\n"
"\n"
"\n"
"QPushButton:hover { \n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                   stop: 0 rgb(254,229,172), stop: 1 #FFFFFF);\n"
"background-position: top center; } \n"
"\n"
"QPushButton:pressed {\n"
"     background-color: darkgrey;\n"
"     border-style: inset;\n"
" }"));
        folder->setSizeAdjustPolicy(QComboBox::AdjustToContents);
        folder->setIconSize(QSize(40, 40));

        horizontalLayout_85->addWidget(folder);

        deleteEmail = new QPushButton(verticalLayoutWidget_2);
        deleteEmail->setObjectName(QStringLiteral("deleteEmail"));
        deleteEmail->setStyleSheet(QLatin1String("QPushButton {\n"
" border: 2px solid gray;\n"
" background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                   stop: 0 #E0E0E0, stop: 1 #FFFFFF);\n"
" border-radius: 5px;\n"
" margin: 2px;\n"
" padding: 2px;\n"
" }\n"
"\n"
"\n"
"QPushButton:hover { \n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                   stop: 0 rgb(254,229,172), stop: 1 #FFFFFF);\n"
"background-position: top center; } \n"
"\n"
"QPushButton:pressed {\n"
"     background-color: darkgrey;\n"
"     border-style: inset;\n"
" }"));
        deleteEmail->setIcon(icon6);
        deleteEmail->setIconSize(QSize(40, 40));

        horizontalLayout_85->addWidget(deleteEmail);

        reply = new QPushButton(verticalLayoutWidget_2);
        reply->setObjectName(QStringLiteral("reply"));
        reply->setStyleSheet(QLatin1String("QPushButton {\n"
" border: 2px solid gray;\n"
" background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                   stop: 0 #E0E0E0, stop: 1 #FFFFFF);\n"
" border-radius: 5px;\n"
" margin: 2px;\n"
" padding: 2px;\n"
" }\n"
"\n"
"\n"
"QPushButton:hover { \n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                   stop: 0 rgb(254,229,172), stop: 1 #FFFFFF);\n"
"background-position: top center; } \n"
"\n"
"QPushButton:pressed {\n"
"     background-color: darkgrey;\n"
"     border-style: inset;\n"
" }"));
        QIcon icon20;
        icon20.addFile(QStringLiteral(":/nuvola/reply.png"), QSize(), QIcon::Normal, QIcon::Off);
        reply->setIcon(icon20);
        reply->setIconSize(QSize(40, 40));

        horizontalLayout_85->addWidget(reply);

        resend = new QPushButton(verticalLayoutWidget_2);
        resend->setObjectName(QStringLiteral("resend"));
        resend->setStyleSheet(QLatin1String("QPushButton {\n"
" border: 2px solid gray;\n"
" background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                   stop: 0 #E0E0E0, stop: 1 #FFFFFF);\n"
" border-radius: 5px;\n"
" margin: 2px;\n"
" padding: 2px;\n"
" }\n"
"\n"
"\n"
"QPushButton:hover { \n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                   stop: 0 rgb(254,229,172), stop: 1 #FFFFFF);\n"
"background-position: top center; } \n"
"\n"
"QPushButton:pressed {\n"
"     background-color: darkgrey;\n"
"     border-style: inset;\n"
" }"));
        QIcon icon21;
        icon21.addFile(QStringLiteral(":/nuvola/up.png"), QSize(), QIcon::Normal, QIcon::Off);
        resend->setIcon(icon21);
        resend->setIconSize(QSize(40, 40));

        horizontalLayout_85->addWidget(resend);


        verticalLayout_69->addLayout(horizontalLayout_85);

        saveAttachment = new QPushButton(verticalLayoutWidget_2);
        saveAttachment->setObjectName(QStringLiteral("saveAttachment"));
        saveAttachment->setStyleSheet(QLatin1String("QPushButton {\n"
" border: 2px solid gray;\n"
" background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                   stop: 0 #E0E0E0, stop: 1 #FFFFFF);\n"
" border-radius: 5px;\n"
" margin: 2px;\n"
" padding: 2px;\n"
" }\n"
"\n"
"\n"
"QPushButton:hover { \n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                   stop: 0 rgb(254,229,172), stop: 1 #FFFFFF);\n"
"background-position: top center; } \n"
"\n"
"QPushButton:pressed {\n"
"     background-color: darkgrey;\n"
"     border-style: inset;\n"
" }"));
        QIcon icon22;
        icon22.addFile(QStringLiteral(":/generic/attach.png"), QSize(), QIcon::Normal, QIcon::Off);
        saveAttachment->setIcon(icon22);

        verticalLayout_69->addWidget(saveAttachment);

        readVerticalSplitter = new QSplitter(verticalLayoutWidget_2);
        readVerticalSplitter->setObjectName(QStringLiteral("readVerticalSplitter"));
        readVerticalSplitter->setOrientation(Qt::Vertical);
        mail = new QTableWidget(readVerticalSplitter);
        if (mail->columnCount() < 12)
            mail->setColumnCount(12);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        mail->setHorizontalHeaderItem(0, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        mail->setHorizontalHeaderItem(1, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        mail->setHorizontalHeaderItem(2, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        mail->setHorizontalHeaderItem(3, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        mail->setHorizontalHeaderItem(4, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        mail->setHorizontalHeaderItem(5, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        mail->setHorizontalHeaderItem(6, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        mail->setHorizontalHeaderItem(7, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        mail->setHorizontalHeaderItem(8, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        mail->setHorizontalHeaderItem(9, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        mail->setHorizontalHeaderItem(10, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        mail->setHorizontalHeaderItem(11, __qtablewidgetitem20);
        mail->setObjectName(QStringLiteral("mail"));
        mail->setAlternatingRowColors(true);
        mail->setSelectionMode(QAbstractItemView::MultiSelection);
        mail->setSelectionBehavior(QAbstractItemView::SelectRows);
        mail->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        mail->setSortingEnabled(true);
        readVerticalSplitter->addWidget(mail);
        mail->horizontalHeader()->setDefaultSectionSize(150);
        mail->horizontalHeader()->setStretchLastSection(true);
        mailMessage = new QTextBrowser(readVerticalSplitter);
        mailMessage->setObjectName(QStringLiteral("mailMessage"));
        mailMessage->setTabChangesFocus(true);
        mailMessage->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);
        mailMessage->setOpenLinks(false);
        readVerticalSplitter->addWidget(mailMessage);

        verticalLayout_69->addWidget(readVerticalSplitter);

        emailSplitter->addWidget(verticalLayoutWidget_2);

        horizontalLayout->addWidget(emailSplitter);

        QIcon icon23;
        icon23.addFile(QStringLiteral(":/nuvola/email.png"), QSize(), QIcon::Normal, QIcon::Off);
        mailTab->addTab(tab_4, icon23, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        verticalLayout_23 = new QVBoxLayout(tab_6);
        verticalLayout_23->setObjectName(QStringLiteral("verticalLayout_23"));
        horizontalLayout_37 = new QHBoxLayout();
        horizontalLayout_37->setSpacing(5);
        horizontalLayout_37->setObjectName(QStringLiteral("horizontalLayout_37"));
        label_27 = new QLabel(tab_6);
        label_27->setObjectName(QStringLiteral("label_27"));

        horizontalLayout_37->addWidget(label_27);

        days = new QSpinBox(tab_6);
        days->setObjectName(QStringLiteral("days"));
        days->setMinimum(1);
        days->setMaximum(366);

        horizontalLayout_37->addWidget(days);

        label_28 = new QLabel(tab_6);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setWordWrap(true);

        horizontalLayout_37->addWidget(label_28);


        verticalLayout_23->addLayout(horizontalLayout_37);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setSpacing(5);
        horizontalLayout_19->setObjectName(QStringLiteral("horizontalLayout_19"));
        postofficeCheckBox = new QCheckBox(tab_6);
        postofficeCheckBox->setObjectName(QStringLiteral("postofficeCheckBox"));

        horizontalLayout_19->addWidget(postofficeCheckBox);

        horizontalSpacer_18 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_19->addItem(horizontalSpacer_18);


        verticalLayout_23->addLayout(horizontalLayout_19);

        postoffice = new QTableWidget(tab_6);
        if (postoffice->columnCount() < 3)
            postoffice->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        postoffice->setHorizontalHeaderItem(0, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        postoffice->setHorizontalHeaderItem(1, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        postoffice->setHorizontalHeaderItem(2, __qtablewidgetitem23);
        postoffice->setObjectName(QStringLiteral("postoffice"));
        postoffice->setAlternatingRowColors(true);
        postoffice->setSelectionMode(QAbstractItemView::SingleSelection);
        postoffice->setSelectionBehavior(QAbstractItemView::SelectRows);
        postoffice->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        postoffice->setSortingEnabled(true);
        postoffice->horizontalHeader()->setDefaultSectionSize(150);
        postoffice->horizontalHeader()->setStretchLastSection(true);

        verticalLayout_23->addWidget(postoffice);

        groupBox_6 = new QGroupBox(tab_6);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        verticalLayout_50 = new QVBoxLayout(groupBox_6);
        verticalLayout_50->setSpacing(5);
        verticalLayout_50->setObjectName(QStringLiteral("verticalLayout_50"));
        verticalLayout_50->setContentsMargins(5, 5, 5, 5);
        verticalLayout_51 = new QVBoxLayout();
        verticalLayout_51->setSpacing(5);
        verticalLayout_51->setObjectName(QStringLiteral("verticalLayout_51"));
        institutions = new QTableWidget(groupBox_6);
        if (institutions->columnCount() < 4)
            institutions->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        institutions->setHorizontalHeaderItem(0, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        institutions->setHorizontalHeaderItem(1, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        institutions->setHorizontalHeaderItem(2, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        institutions->setHorizontalHeaderItem(3, __qtablewidgetitem27);
        institutions->setObjectName(QStringLiteral("institutions"));
        institutions->setAlternatingRowColors(true);
        institutions->setSelectionMode(QAbstractItemView::SingleSelection);
        institutions->setSelectionBehavior(QAbstractItemView::SelectRows);
        institutions->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        institutions->setSortingEnabled(true);
        institutions->horizontalHeader()->setDefaultSectionSize(150);
        institutions->horizontalHeader()->setStretchLastSection(true);

        verticalLayout_51->addWidget(institutions);

        horizontalLayout_76 = new QHBoxLayout();
        horizontalLayout_76->setSpacing(5);
        horizontalLayout_76->setObjectName(QStringLiteral("horizontalLayout_76"));
        copyInstitution = new QPushButton(groupBox_6);
        copyInstitution->setObjectName(QStringLiteral("copyInstitution"));
        copyInstitution->setStyleSheet(QLatin1String("QPushButton {\n"
" border: 2px solid gray;\n"
" background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                   stop: 0 #E0E0E0, stop: 1 #FFFFFF);\n"
" border-radius: 5px;\n"
" margin: 2px;\n"
" padding: 2px;\n"
" }\n"
"\n"
"\n"
"\n"
"QPushButton:hover { \n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                   stop: 0 rgb(254,229,172), stop: 1 #FFFFFF);\n"
"background-position: top center; } \n"
"\n"
"QPushButton:pressed {\n"
"     background-color: darkgrey;\n"
"     border-style: inset;\n"
" }"));
        QIcon icon24;
        icon24.addFile(QStringLiteral(":/nuvola/copy.png"), QSize(), QIcon::Normal, QIcon::Off);
        copyInstitution->setIcon(icon24);

        horizontalLayout_76->addWidget(copyInstitution);

        deleteInstitution = new QPushButton(groupBox_6);
        deleteInstitution->setObjectName(QStringLiteral("deleteInstitution"));
        deleteInstitution->setStyleSheet(QLatin1String("QPushButton {\n"
" border: 2px solid gray;\n"
" background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                   stop: 0 #E0E0E0, stop: 1 #FFFFFF);\n"
" border-radius: 5px;\n"
" margin: 2px;\n"
" padding: 2px;\n"
" }\n"
"\n"
"\n"
"\n"
"QPushButton:hover { \n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                   stop: 0 rgb(254,229,172), stop: 1 #FFFFFF);\n"
"background-position: top center; } \n"
"\n"
"QPushButton:pressed {\n"
"     background-color: darkgrey;\n"
"     border-style: inset;\n"
" }"));
        QIcon icon25;
        icon25.addFile(QStringLiteral(":/nuvola/delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        deleteInstitution->setIcon(icon25);

        horizontalLayout_76->addWidget(deleteInstitution);


        verticalLayout_51->addLayout(horizontalLayout_76);


        verticalLayout_50->addLayout(verticalLayout_51);

        groupBox_5 = new QGroupBox(groupBox_6);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        verticalLayout_52 = new QVBoxLayout(groupBox_5);
        verticalLayout_52->setSpacing(5);
        verticalLayout_52->setObjectName(QStringLiteral("verticalLayout_52"));
        verticalLayout_52->setContentsMargins(5, 5, 5, 5);
        institutionFrame = new QFrame(groupBox_5);
        institutionFrame->setObjectName(QStringLiteral("institutionFrame"));
        institutionFrame->setFrameShape(QFrame::NoFrame);
        verticalLayout_53 = new QVBoxLayout(institutionFrame);
        verticalLayout_53->setSpacing(5);
        verticalLayout_53->setObjectName(QStringLiteral("verticalLayout_53"));
        verticalLayout_53->setContentsMargins(5, 5, 5, 5);
        gridLayout_8 = new QGridLayout();
        gridLayout_8->setSpacing(5);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        institutionPostalAddressType = new QComboBox(institutionFrame);
        institutionPostalAddressType->setObjectName(QStringLiteral("institutionPostalAddressType"));
        institutionPostalAddressType->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        gridLayout_8->addWidget(institutionPostalAddressType, 1, 3, 1, 1);

        label_75 = new QLabel(institutionFrame);
        label_75->setObjectName(QStringLiteral("label_75"));

        gridLayout_8->addWidget(label_75, 0, 0, 1, 1);

        institutionName = new QLineEdit(institutionFrame);
        institutionName->setObjectName(QStringLiteral("institutionName"));

        gridLayout_8->addWidget(institutionName, 0, 1, 1, 1);

        label_77 = new QLabel(institutionFrame);
        label_77->setObjectName(QStringLiteral("label_77"));

        gridLayout_8->addWidget(label_77, 1, 0, 1, 1);

        institutionPostalAddress = new QLineEdit(institutionFrame);
        institutionPostalAddress->setObjectName(QStringLiteral("institutionPostalAddress"));

        gridLayout_8->addWidget(institutionPostalAddress, 1, 1, 1, 1);

        institutionNameType = new QComboBox(institutionFrame);
        institutionNameType->setObjectName(QStringLiteral("institutionNameType"));
        institutionNameType->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        gridLayout_8->addWidget(institutionNameType, 0, 3, 1, 1);

        label_79 = new QLabel(institutionFrame);
        label_79->setObjectName(QStringLiteral("label_79"));

        gridLayout_8->addWidget(label_79, 0, 2, 1, 1);

        label_80 = new QLabel(institutionFrame);
        label_80->setObjectName(QStringLiteral("label_80"));

        gridLayout_8->addWidget(label_80, 1, 2, 1, 1);


        verticalLayout_53->addLayout(gridLayout_8);


        verticalLayout_52->addWidget(institutionFrame);

        horizontalLayout_77 = new QHBoxLayout();
        horizontalLayout_77->setSpacing(5);
        horizontalLayout_77->setObjectName(QStringLiteral("horizontalLayout_77"));
        addInstitutionCheckBox = new QCheckBox(groupBox_5);
        addInstitutionCheckBox->setObjectName(QStringLiteral("addInstitutionCheckBox"));
        QSizePolicy sizePolicy6(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(addInstitutionCheckBox->sizePolicy().hasHeightForWidth());
        addInstitutionCheckBox->setSizePolicy(sizePolicy6);

        horizontalLayout_77->addWidget(addInstitutionCheckBox);

        addInstitutionLineEdit = new QLineEdit(groupBox_5);
        addInstitutionLineEdit->setObjectName(QStringLiteral("addInstitutionLineEdit"));

        horizontalLayout_77->addWidget(addInstitutionLineEdit);


        verticalLayout_52->addLayout(horizontalLayout_77);

        horizontalLayout_79 = new QHBoxLayout();
        horizontalLayout_79->setSpacing(5);
        horizontalLayout_79->setObjectName(QStringLiteral("horizontalLayout_79"));
        horizontalSpacer_58 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_79->addItem(horizontalSpacer_58);

        addInstitution = new QPushButton(groupBox_5);
        addInstitution->setObjectName(QStringLiteral("addInstitution"));
        addInstitution->setStyleSheet(QLatin1String("QPushButton {\n"
" border: 2px solid gray;\n"
" background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                   stop: 0 #E0E0E0, stop: 1 #FFFFFF);\n"
" border-radius: 5px;\n"
" margin: 2px;\n"
" padding: 2px;\n"
" }\n"
"\n"
"\n"
"\n"
"QPushButton:hover { \n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                   stop: 0 rgb(254,229,172), stop: 1 #FFFFFF);\n"
"background-position: top center; } \n"
"\n"
"QPushButton:pressed {\n"
"     background-color: darkgrey;\n"
"     border-style: inset;\n"
" }"));
        addInstitution->setIcon(icon4);

        horizontalLayout_79->addWidget(addInstitution);


        verticalLayout_52->addLayout(horizontalLayout_79);


        verticalLayout_50->addWidget(groupBox_5);


        verticalLayout_23->addWidget(groupBox_6);

        QIcon icon26;
        icon26.addFile(QStringLiteral(":/nuvola/database.png"), QSize(), QIcon::Normal, QIcon::Off);
        mailTab->addTab(tab_6, icon26, QString());
        tab_13 = new QWidget();
        tab_13->setObjectName(QStringLiteral("tab_13"));
        verticalLayout_19 = new QVBoxLayout(tab_13);
        verticalLayout_19->setObjectName(QStringLiteral("verticalLayout_19"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(5);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        label_25 = new QLabel(tab_13);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setAlignment(Qt::AlignCenter);
        label_25->setMargin(7);

        gridLayout_4->addWidget(label_25, 3, 0, 1, 1);

        label_6 = new QLabel(tab_13);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setAlignment(Qt::AlignCenter);
        label_6->setMargin(7);

        gridLayout_4->addWidget(label_6, 6, 0, 1, 1);

        horizontalLayout_47 = new QHBoxLayout();
        horizontalLayout_47->setSpacing(5);
        horizontalLayout_47->setObjectName(QStringLiteral("horizontalLayout_47"));
        emailName = new QComboBox(tab_13);
        emailName->setObjectName(QStringLiteral("emailName"));

        horizontalLayout_47->addWidget(emailName);

        emailNameEditable = new QLineEdit(tab_13);
        emailNameEditable->setObjectName(QStringLiteral("emailNameEditable"));

        horizontalLayout_47->addWidget(emailNameEditable);

        reloadEmailNames = new QPushButton(tab_13);
        reloadEmailNames->setObjectName(QStringLiteral("reloadEmailNames"));

        horizontalLayout_47->addWidget(reloadEmailNames);

        saveEmailName = new QPushButton(tab_13);
        saveEmailName->setObjectName(QStringLiteral("saveEmailName"));
        saveEmailName->setStyleSheet(QLatin1String("QPushButton {\n"
" border: 2px solid gray;\n"
" background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                   stop: 0 #E0E0E0, stop: 1 #FFFFFF);\n"
" border-radius: 5px;\n"
"\n"
" padding: 2px;\n"
" }\n"
"\n"
"\n"
"QPushButton:hover { \n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                   stop: 0 rgb(254,229,172), stop: 1 #FFFFFF);\n"
"background-position: top center; } \n"
"\n"
"QPushButton:pressed {\n"
"     background-color: darkgrey;\n"
"     border-style: inset;\n"
" }"));

        horizontalLayout_47->addWidget(saveEmailName);


        gridLayout_4->addLayout(horizontalLayout_47, 0, 1, 1, 1);

        label_41 = new QLabel(tab_13);
        label_41->setObjectName(QStringLiteral("label_41"));
        label_41->setAlignment(Qt::AlignCenter);
        label_41->setMargin(7);

        gridLayout_4->addWidget(label_41, 0, 0, 1, 1);

        verticalLayout_71 = new QVBoxLayout();
        verticalLayout_71->setSpacing(5);
        verticalLayout_71->setObjectName(QStringLiteral("verticalLayout_71"));
        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_71->addItem(verticalSpacer_7);

        label_4 = new QLabel(tab_13);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setAlignment(Qt::AlignCenter);
        label_4->setMargin(7);

        verticalLayout_71->addWidget(label_4);

        richtext = new QCheckBox(tab_13);
        richtext->setObjectName(QStringLiteral("richtext"));
        richtext->setChecked(true);

        verticalLayout_71->addWidget(richtext);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_71->addItem(verticalSpacer_5);


        gridLayout_4->addLayout(verticalLayout_71, 4, 0, 1, 1);

        horizontalLayout_31 = new QHBoxLayout();
        horizontalLayout_31->setSpacing(5);
        horizontalLayout_31->setObjectName(QStringLiteral("horizontalLayout_31"));
        goldbug = new QLineEdit(tab_13);
        goldbug->setObjectName(QStringLiteral("goldbug"));

        horizontalLayout_31->addWidget(goldbug);

        email_fs_gb = new QComboBox(tab_13);
        email_fs_gb->setObjectName(QStringLiteral("email_fs_gb"));
        email_fs_gb->setSizeAdjustPolicy(QComboBox::AdjustToContents);
        email_fs_gb->setMinimumContentsLength(25);

        horizontalLayout_31->addWidget(email_fs_gb);

        saveCopy = new QCheckBox(tab_13);
        saveCopy->setObjectName(QStringLiteral("saveCopy"));
        sizePolicy6.setHeightForWidth(saveCopy->sizePolicy().hasHeightForWidth());
        saveCopy->setSizePolicy(sizePolicy6);
        saveCopy->setChecked(true);

        horizontalLayout_31->addWidget(saveCopy);

        sign_this_email = new QCheckBox(tab_13);
        sign_this_email->setObjectName(QStringLiteral("sign_this_email"));

        horizontalLayout_31->addWidget(sign_this_email);

        sendMail = new QPushButton(tab_13);
        sendMail->setObjectName(QStringLiteral("sendMail"));
        sizePolicy1.setHeightForWidth(sendMail->sizePolicy().hasHeightForWidth());
        sendMail->setSizePolicy(sizePolicy1);
        sendMail->setStyleSheet(QLatin1String("QPushButton {\n"
" border: 2px solid gray;\n"
" background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                   stop: 0 #E0E0E0, stop: 1 #FFFFFF);\n"
" border-radius: 5px;\n"
"\n"
" padding: 2px;\n"
" }\n"
"\n"
"\n"
"QPushButton:hover { \n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                   stop: 0 rgb(254,229,172), stop: 1 #FFFFFF);\n"
"background-position: top center; } \n"
"\n"
"QPushButton:pressed {\n"
"     background-color: darkgrey;\n"
"     border-style: inset;\n"
" }"));
        sendMail->setIcon(icon23);

        horizontalLayout_31->addWidget(sendMail);


        gridLayout_4->addLayout(horizontalLayout_31, 6, 1, 1, 1);

        horizontalLayout_51 = new QHBoxLayout();
        horizontalLayout_51->setSpacing(5);
        horizontalLayout_51->setObjectName(QStringLiteral("horizontalLayout_51"));
        attachment = new QTextEdit(tab_13);
        attachment->setObjectName(QStringLiteral("attachment"));
        QSizePolicy sizePolicy7(QSizePolicy::Expanding, QSizePolicy::Maximum);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(attachment->sizePolicy().hasHeightForWidth());
        attachment->setSizePolicy(sizePolicy7);

        horizontalLayout_51->addWidget(attachment);

        selectAttachment = new QPushButton(tab_13);
        selectAttachment->setObjectName(QStringLiteral("selectAttachment"));
        selectAttachment->setStyleSheet(QLatin1String("QPushButton {\n"
" border: 2px solid gray;\n"
" background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                   stop: 0 #E0E0E0, stop: 1 #FFFFFF);\n"
" border-radius: 5px;\n"
"\n"
" padding: 2px;\n"
" }\n"
"\n"
"\n"
"QPushButton:hover { \n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                   stop: 0 rgb(254,229,172), stop: 1 #FFFFFF);\n"
"background-position: top center; } \n"
"\n"
"QPushButton:pressed {\n"
"     background-color: darkgrey;\n"
"     border-style: inset;\n"
" }"));

        horizontalLayout_51->addWidget(selectAttachment);


        gridLayout_4->addLayout(horizontalLayout_51, 5, 1, 1, 1);

        outgoingMessage = new QTextEdit(tab_13);
        outgoingMessage->setObjectName(QStringLiteral("outgoingMessage"));
        outgoingMessage->setTabChangesFocus(true);
        outgoingMessage->setTextInteractionFlags(Qt::TextEditorInteraction);

        gridLayout_4->addWidget(outgoingMessage, 4, 1, 1, 1);

        verticalLayout_70 = new QVBoxLayout();
        verticalLayout_70->setSpacing(5);
        verticalLayout_70->setObjectName(QStringLiteral("verticalLayout_70"));
        emailParticipants = new QTableWidget(tab_13);
        if (emailParticipants->columnCount() < 5)
            emailParticipants->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        emailParticipants->setHorizontalHeaderItem(0, __qtablewidgetitem28);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        emailParticipants->setHorizontalHeaderItem(1, __qtablewidgetitem29);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        emailParticipants->setHorizontalHeaderItem(2, __qtablewidgetitem30);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        emailParticipants->setHorizontalHeaderItem(3, __qtablewidgetitem31);
        QTableWidgetItem *__qtablewidgetitem32 = new QTableWidgetItem();
        emailParticipants->setHorizontalHeaderItem(4, __qtablewidgetitem32);
        emailParticipants->setObjectName(QStringLiteral("emailParticipants"));
        QSizePolicy sizePolicy8(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(emailParticipants->sizePolicy().hasHeightForWidth());
        emailParticipants->setSizePolicy(sizePolicy8);
        emailParticipants->setMaximumSize(QSize(16777215, 150));
        emailParticipants->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        emailParticipants->setAlternatingRowColors(true);
        emailParticipants->setSelectionBehavior(QAbstractItemView::SelectRows);
        emailParticipants->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        emailParticipants->setSortingEnabled(true);
        emailParticipants->horizontalHeader()->setDefaultSectionSize(200);
        emailParticipants->horizontalHeader()->setStretchLastSection(true);

        verticalLayout_70->addWidget(emailParticipants);


        gridLayout_4->addLayout(verticalLayout_70, 2, 1, 1, 1);

        label_94 = new QLabel(tab_13);
        label_94->setObjectName(QStringLiteral("label_94"));
        label_94->setAlignment(Qt::AlignCenter);
        label_94->setMargin(7);

        gridLayout_4->addWidget(label_94, 5, 0, 1, 1);

        outgoingSubject = new QLineEdit(tab_13);
        outgoingSubject->setObjectName(QStringLiteral("outgoingSubject"));

        gridLayout_4->addWidget(outgoingSubject, 3, 1, 1, 1);

        verticalLayout_20 = new QVBoxLayout();
        verticalLayout_20->setObjectName(QStringLiteral("verticalLayout_20"));
        verticalLayout_20->setContentsMargins(-1, 0, -1, -1);
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(-1, 0, -1, -1);
        clearOutgoing = new QPushButton(tab_13);
        clearOutgoing->setObjectName(QStringLiteral("clearOutgoing"));
        QSizePolicy sizePolicy9(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy9.setHorizontalStretch(0);
        sizePolicy9.setVerticalStretch(0);
        sizePolicy9.setHeightForWidth(clearOutgoing->sizePolicy().hasHeightForWidth());
        clearOutgoing->setSizePolicy(sizePolicy9);
        clearOutgoing->setStyleSheet(QLatin1String("QPushButton {\n"
" border: 2px solid gray;\n"
" background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                   stop: 0 #E0E0E0, stop: 1 #FFFFFF);\n"
" border-radius: 5px;\n"
"\n"
" padding: 2px;\n"
" }\n"
"\n"
"\n"
"QPushButton:hover { \n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                   stop: 0 rgb(254,229,172), stop: 1 #FFFFFF);\n"
"background-position: top center; } \n"
"\n"
"QPushButton:pressed {\n"
"     background-color: darkgrey;\n"
"     border-style: inset;\n"
" }"));
        clearOutgoing->setIcon(icon6);

        horizontalLayout_9->addWidget(clearOutgoing);


        verticalLayout_20->addLayout(horizontalLayout_9);

        label_10 = new QLabel(tab_13);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setAlignment(Qt::AlignCenter);
        label_10->setMargin(7);

        verticalLayout_20->addWidget(label_10);

        horizontalLayout_24 = new QHBoxLayout();
        horizontalLayout_24->setObjectName(QStringLiteral("horizontalLayout_24"));
        horizontalLayout_24->setContentsMargins(-1, 0, -1, -1);
        emailWriteActionMenu = new QToolButton(tab_13);
        emailWriteActionMenu->setObjectName(QStringLiteral("emailWriteActionMenu"));
        emailWriteActionMenu->setIcon(icon12);
        emailWriteActionMenu->setPopupMode(QToolButton::MenuButtonPopup);
        emailWriteActionMenu->setAutoRaise(true);

        horizontalLayout_24->addWidget(emailWriteActionMenu);


        verticalLayout_20->addLayout(horizontalLayout_24);


        gridLayout_4->addLayout(verticalLayout_20, 2, 0, 1, 1);


        verticalLayout_19->addLayout(gridLayout_4);

        QIcon icon27;
        icon27.addFile(QStringLiteral(":/nuvola/modify.png"), QSize(), QIcon::Normal, QIcon::Off);
        mailTab->addTab(tab_13, icon27, QString());

        verticalLayout_55->addWidget(mailTab);

        scrollArea_6->setWidget(scrollAreaWidgetContents_6);

        verticalLayout_26->addWidget(scrollArea_6);

        QIcon icon28;
        icon28.addFile(QStringLiteral(":/nuvola/email_t.png"), QSize(), QIcon::Normal, QIcon::Off);
        tab->addTab(tab_email, icon28, QString());
        tab_createserver = new QWidget();
        tab_createserver->setObjectName(QStringLiteral("tab_createserver"));
        verticalLayout_33 = new QVBoxLayout(tab_createserver);
        verticalLayout_33->setSpacing(5);
        verticalLayout_33->setObjectName(QStringLiteral("verticalLayout_33"));
        verticalLayout_33->setContentsMargins(5, 5, 5, 5);
        label_76 = new QLabel(tab_createserver);
        label_76->setObjectName(QStringLiteral("label_76"));
        label_76->setMinimumSize(QSize(0, 40));
        label_76->setFont(font);
        label_76->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:reflect, x1:0.023, y1:0.988636, x2:0.028, y2:0.011, stop:0 rgba(218, 232, 255, 255), stop:1 rgba(170, 85, 255, 255));\n"
"color: rgb(255, 255, 255);"));
        label_76->setIndent(5);

        verticalLayout_33->addWidget(label_76);

        line_5 = new QFrame(tab_createserver);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);

        verticalLayout_33->addWidget(line_5);

        scrollArea_7 = new QScrollArea(tab_createserver);
        scrollArea_7->setObjectName(QStringLiteral("scrollArea_7"));
        scrollArea_7->setFrameShape(QFrame::NoFrame);
        scrollArea_7->setWidgetResizable(true);
        scrollAreaWidgetContents_7 = new QWidget();
        scrollAreaWidgetContents_7->setObjectName(QStringLiteral("scrollAreaWidgetContents_7"));
        scrollAreaWidgetContents_7->setGeometry(QRect(0, 0, 564, 1738));
        verticalLayout_29 = new QVBoxLayout(scrollAreaWidgetContents_7);
        verticalLayout_29->setObjectName(QStringLiteral("verticalLayout_29"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(5);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        listeners = new QTableWidget(scrollAreaWidgetContents_7);
        if (listeners->columnCount() < 25)
            listeners->setColumnCount(25);
        QTableWidgetItem *__qtablewidgetitem33 = new QTableWidgetItem();
        listeners->setHorizontalHeaderItem(0, __qtablewidgetitem33);
        QTableWidgetItem *__qtablewidgetitem34 = new QTableWidgetItem();
        listeners->setHorizontalHeaderItem(1, __qtablewidgetitem34);
        QTableWidgetItem *__qtablewidgetitem35 = new QTableWidgetItem();
        listeners->setHorizontalHeaderItem(2, __qtablewidgetitem35);
        QTableWidgetItem *__qtablewidgetitem36 = new QTableWidgetItem();
        listeners->setHorizontalHeaderItem(3, __qtablewidgetitem36);
        QTableWidgetItem *__qtablewidgetitem37 = new QTableWidgetItem();
        listeners->setHorizontalHeaderItem(4, __qtablewidgetitem37);
        QTableWidgetItem *__qtablewidgetitem38 = new QTableWidgetItem();
        listeners->setHorizontalHeaderItem(5, __qtablewidgetitem38);
        QTableWidgetItem *__qtablewidgetitem39 = new QTableWidgetItem();
        listeners->setHorizontalHeaderItem(6, __qtablewidgetitem39);
        QTableWidgetItem *__qtablewidgetitem40 = new QTableWidgetItem();
        listeners->setHorizontalHeaderItem(7, __qtablewidgetitem40);
        QTableWidgetItem *__qtablewidgetitem41 = new QTableWidgetItem();
        listeners->setHorizontalHeaderItem(8, __qtablewidgetitem41);
        QTableWidgetItem *__qtablewidgetitem42 = new QTableWidgetItem();
        listeners->setHorizontalHeaderItem(9, __qtablewidgetitem42);
        QTableWidgetItem *__qtablewidgetitem43 = new QTableWidgetItem();
        listeners->setHorizontalHeaderItem(10, __qtablewidgetitem43);
        QTableWidgetItem *__qtablewidgetitem44 = new QTableWidgetItem();
        listeners->setHorizontalHeaderItem(11, __qtablewidgetitem44);
        QTableWidgetItem *__qtablewidgetitem45 = new QTableWidgetItem();
        listeners->setHorizontalHeaderItem(12, __qtablewidgetitem45);
        QTableWidgetItem *__qtablewidgetitem46 = new QTableWidgetItem();
        listeners->setHorizontalHeaderItem(13, __qtablewidgetitem46);
        QTableWidgetItem *__qtablewidgetitem47 = new QTableWidgetItem();
        listeners->setHorizontalHeaderItem(14, __qtablewidgetitem47);
        QTableWidgetItem *__qtablewidgetitem48 = new QTableWidgetItem();
        listeners->setHorizontalHeaderItem(15, __qtablewidgetitem48);
        QTableWidgetItem *__qtablewidgetitem49 = new QTableWidgetItem();
        listeners->setHorizontalHeaderItem(16, __qtablewidgetitem49);
        QTableWidgetItem *__qtablewidgetitem50 = new QTableWidgetItem();
        listeners->setHorizontalHeaderItem(17, __qtablewidgetitem50);
        QTableWidgetItem *__qtablewidgetitem51 = new QTableWidgetItem();
        listeners->setHorizontalHeaderItem(18, __qtablewidgetitem51);
        QTableWidgetItem *__qtablewidgetitem52 = new QTableWidgetItem();
        listeners->setHorizontalHeaderItem(19, __qtablewidgetitem52);
        QTableWidgetItem *__qtablewidgetitem53 = new QTableWidgetItem();
        listeners->setHorizontalHeaderItem(20, __qtablewidgetitem53);
        QTableWidgetItem *__qtablewidgetitem54 = new QTableWidgetItem();
        listeners->setHorizontalHeaderItem(21, __qtablewidgetitem54);
        QTableWidgetItem *__qtablewidgetitem55 = new QTableWidgetItem();
        listeners->setHorizontalHeaderItem(22, __qtablewidgetitem55);
        QTableWidgetItem *__qtablewidgetitem56 = new QTableWidgetItem();
        listeners->setHorizontalHeaderItem(23, __qtablewidgetitem56);
        QTableWidgetItem *__qtablewidgetitem57 = new QTableWidgetItem();
        listeners->setHorizontalHeaderItem(24, __qtablewidgetitem57);
        listeners->setObjectName(QStringLiteral("listeners"));
        listeners->setMaximumSize(QSize(16777215, 130));
        listeners->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        listeners->setAlternatingRowColors(true);
        listeners->setSelectionMode(QAbstractItemView::SingleSelection);
        listeners->setSelectionBehavior(QAbstractItemView::SelectRows);
        listeners->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        listeners->setSortingEnabled(true);
        listeners->horizontalHeader()->setDefaultSectionSize(200);
        listeners->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        listeners->horizontalHeader()->setStretchLastSection(true);

        verticalLayout_6->addWidget(listeners);

        groupBox_7 = new QGroupBox(scrollAreaWidgetContents_7);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        verticalLayout_31 = new QVBoxLayout(groupBox_7);
        verticalLayout_31->setSpacing(5);
        verticalLayout_31->setObjectName(QStringLiteral("verticalLayout_31"));
        verticalLayout_31->setContentsMargins(5, 5, 5, 5);
        label_21 = new QLabel(groupBox_7);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setWordWrap(true);

        verticalLayout_31->addWidget(label_21);

        horizontalLayout_36 = new QHBoxLayout();
        horizontalLayout_36->setSpacing(5);
        horizontalLayout_36->setObjectName(QStringLiteral("horizontalLayout_36"));
        label_38 = new QLabel(groupBox_7);
        label_38->setObjectName(QStringLiteral("label_38"));

        horizontalLayout_36->addWidget(label_38);

        listenersEchoMode = new QComboBox(groupBox_7);
        listenersEchoMode->setObjectName(QStringLiteral("listenersEchoMode"));
        listenersEchoMode->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        horizontalLayout_36->addWidget(listenersEchoMode);

        horizontalSpacer_27 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_36->addItem(horizontalSpacer_27);

        horizontalLayout_63 = new QHBoxLayout();
        horizontalLayout_63->setSpacing(5);
        horizontalLayout_63->setObjectName(QStringLiteral("horizontalLayout_63"));
        listenerShareAddress = new QCheckBox(groupBox_7);
        listenerShareAddress->setObjectName(QStringLiteral("listenerShareAddress"));
        sizePolicy6.setHeightForWidth(listenerShareAddress->sizePolicy().hasHeightForWidth());
        listenerShareAddress->setSizePolicy(sizePolicy6);

        horizontalLayout_63->addWidget(listenerShareAddress);

        horizontalSpacer_51 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_63->addItem(horizontalSpacer_51);


        horizontalLayout_36->addLayout(horizontalLayout_63);

        listenersActionMenu = new QToolButton(groupBox_7);
        listenersActionMenu->setObjectName(QStringLiteral("listenersActionMenu"));
        listenersActionMenu->setIcon(icon12);
        listenersActionMenu->setPopupMode(QToolButton::MenuButtonPopup);
        listenersActionMenu->setAutoRaise(true);

        horizontalLayout_36->addWidget(listenersActionMenu);


        verticalLayout_31->addLayout(horizontalLayout_36);

        horizontalLayout_52 = new QHBoxLayout();
        horizontalLayout_52->setObjectName(QStringLiteral("horizontalLayout_52"));
        horizontalLayout_52->setContentsMargins(-1, 0, -1, -1);
        sslListener = new QCheckBox(groupBox_7);
        sslListener->setObjectName(QStringLiteral("sslListener"));
        QSizePolicy sizePolicy10(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy10.setHorizontalStretch(0);
        sizePolicy10.setVerticalStretch(0);
        sizePolicy10.setHeightForWidth(sslListener->sizePolicy().hasHeightForWidth());
        sslListener->setSizePolicy(sizePolicy10);
        sslListener->setChecked(true);

        horizontalLayout_52->addWidget(sslListener);

        listenerKeySize = new QComboBox(groupBox_7);
        listenerKeySize->setObjectName(QStringLiteral("listenerKeySize"));
        listenerKeySize->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        horizontalLayout_52->addWidget(listenerKeySize);

        permanentCertificate = new QCheckBox(groupBox_7);
        permanentCertificate->setObjectName(QStringLiteral("permanentCertificate"));
        sizePolicy6.setHeightForWidth(permanentCertificate->sizePolicy().hasHeightForWidth());
        permanentCertificate->setSizePolicy(sizePolicy6);
        permanentCertificate->setChecked(true);

        horizontalLayout_52->addWidget(permanentCertificate);

        recordIPAddress = new QCheckBox(groupBox_7);
        recordIPAddress->setObjectName(QStringLiteral("recordIPAddress"));
        sizePolicy6.setHeightForWidth(recordIPAddress->sizePolicy().hasHeightForWidth());
        recordIPAddress->setSizePolicy(sizePolicy6);

        horizontalLayout_52->addWidget(recordIPAddress);


        verticalLayout_31->addLayout(horizontalLayout_52);

        gridLayout_12 = new QGridLayout();
        gridLayout_12->setSpacing(3);
        gridLayout_12->setObjectName(QStringLiteral("gridLayout_12"));
        gridLayout_12->setContentsMargins(3, 3, 3, 3);
        listenerIP = new QLineEdit(groupBox_7);
        listenerIP->setObjectName(QStringLiteral("listenerIP"));

        gridLayout_12->addWidget(listenerIP, 5, 1, 1, 5);

        listenerTransport = new QComboBox(groupBox_7);
        listenerTransport->setObjectName(QStringLiteral("listenerTransport"));
        listenerTransport->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        gridLayout_12->addWidget(listenerTransport, 8, 1, 1, 2);

        listenerPort = new QSpinBox(groupBox_7);
        listenerPort->setObjectName(QStringLiteral("listenerPort"));
        listenerPort->setMinimum(1);
        listenerPort->setMaximum(65535);
        listenerPort->setValue(4710);

        gridLayout_12->addWidget(listenerPort, 7, 1, 1, 2);

        ipv4Listener = new QRadioButton(groupBox_7);
        ipv4Listener->setObjectName(QStringLiteral("ipv4Listener"));
        ipv4Listener->setLayoutDirection(Qt::LeftToRight);
        ipv4Listener->setChecked(true);

        gridLayout_12->addWidget(ipv4Listener, 0, 0, 1, 1);

        listenerScopeId = new QLineEdit(groupBox_7);
        listenerScopeId->setObjectName(QStringLiteral("listenerScopeId"));

        gridLayout_12->addWidget(listenerScopeId, 6, 1, 1, 5);

        label_65 = new QLabel(groupBox_7);
        label_65->setObjectName(QStringLiteral("label_65"));

        gridLayout_12->addWidget(label_65, 8, 0, 1, 1);

        listenerIPCombo = new QComboBox(groupBox_7);
        listenerIPCombo->setObjectName(QStringLiteral("listenerIPCombo"));
        listenerIPCombo->setStyleSheet(QLatin1String("QComboBox#listenerIPCombo {\n"
"     background-color: rgb(195, 215, 255);\n"
"     border-style: outset;\n"
"     border-width: 2px;\n"
"     border-radius: 10px;\n"
"     border-color: black;\n"
"     min-width: 10em;\n"
"     margin: 2px;\n"
"     padding: 2px;\n"
" }\n"
"\n"
"\n"
"QComboBox#listenerIPCombo:hover { \n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                   stop: 0 rgb(254,229,172), stop: 1 #FFFFFF);\n"
"background-position: top center; } "));
        listenerIPCombo->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        gridLayout_12->addWidget(listenerIPCombo, 0, 2, 1, 4);

        label_12 = new QLabel(groupBox_7);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setLayoutDirection(Qt::RightToLeft);

        gridLayout_12->addWidget(label_12, 7, 0, 1, 1);

        listenerScopeIdLabel = new QLabel(groupBox_7);
        listenerScopeIdLabel->setObjectName(QStringLiteral("listenerScopeIdLabel"));

        gridLayout_12->addWidget(listenerScopeIdLabel, 6, 0, 1, 1);

        ipv6Listener = new QRadioButton(groupBox_7);
        ipv6Listener->setObjectName(QStringLiteral("ipv6Listener"));
        ipv6Listener->setLayoutDirection(Qt::LeftToRight);

        gridLayout_12->addWidget(ipv6Listener, 0, 1, 1, 1);

        label_11 = new QLabel(groupBox_7);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setLayoutDirection(Qt::RightToLeft);

        gridLayout_12->addWidget(label_11, 4, 0, 2, 1);

        addListener = new QPushButton(groupBox_7);
        addListener->setObjectName(QStringLiteral("addListener"));
        QSizePolicy sizePolicy11(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy11.setHorizontalStretch(0);
        sizePolicy11.setVerticalStretch(0);
        sizePolicy11.setHeightForWidth(addListener->sizePolicy().hasHeightForWidth());
        addListener->setSizePolicy(sizePolicy11);
        addListener->setStyleSheet(QLatin1String("QPushButton#addListener {\n"
"     background-color: rgb(195, 215, 255);\n"
"     border-style: outset;\n"
"     border-width: 2px;\n"
"     border-radius: 10px;\n"
"     border-color: black;\n"
"     padding: 2px;\n"
" }\n"
"\n"
"\n"
"\n"
"QPushButton#addListener:hover { \n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                   stop: 0 rgb(254,229,172), stop: 1 #FFFFFF);\n"
"background-position: top center; } \n"
"\n"
"QPushButton#addListener:pressed {\n"
"     background-color: darkgrey;\n"
"     border-style: inset;\n"
" }"));
        addListener->setIcon(icon3);
        addListener->setIconSize(QSize(40, 40));

        gridLayout_12->addWidget(addListener, 7, 4, 2, 1);


        verticalLayout_31->addLayout(gridLayout_12);

        horizontalLayout_86 = new QHBoxLayout();
        horizontalLayout_86->setSpacing(5);
        horizontalLayout_86->setObjectName(QStringLiteral("horizontalLayout_86"));
        label_122 = new QLabel(groupBox_7);
        label_122->setObjectName(QStringLiteral("label_122"));

        horizontalLayout_86->addWidget(label_122);

        days_valid = new QSpinBox(groupBox_7);
        days_valid->setObjectName(QStringLiteral("days_valid"));
        days_valid->setMinimum(1);
        days_valid->setMaximum(18250);
        days_valid->setValue(365);

        horizontalLayout_86->addWidget(days_valid);

        label_64 = new QLabel(groupBox_7);
        label_64->setObjectName(QStringLiteral("label_64"));

        horizontalLayout_86->addWidget(label_64);

        listenersSslControlString = new QLineEdit(groupBox_7);
        listenersSslControlString->setObjectName(QStringLiteral("listenersSslControlString"));

        horizontalLayout_86->addWidget(listenersSslControlString);

        label_71 = new QLabel(groupBox_7);
        label_71->setObjectName(QStringLiteral("label_71"));

        horizontalLayout_86->addWidget(label_71);

        listenerOrientation = new QComboBox(groupBox_7);
        listenerOrientation->setObjectName(QStringLiteral("listenerOrientation"));
        listenerOrientation->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        horizontalLayout_86->addWidget(listenerOrientation);


        verticalLayout_31->addLayout(horizontalLayout_86);


        verticalLayout_6->addWidget(groupBox_7);

        accountsGB = new QGroupBox(scrollAreaWidgetContents_7);
        accountsGB->setObjectName(QStringLiteral("accountsGB"));
        verticalLayout_37 = new QVBoxLayout(accountsGB);
        verticalLayout_37->setSpacing(5);
        verticalLayout_37->setObjectName(QStringLiteral("verticalLayout_37"));
        verticalLayout_37->setContentsMargins(5, 5, 5, 5);
        horizontalLayout_67 = new QHBoxLayout();
        horizontalLayout_67->setObjectName(QStringLiteral("horizontalLayout_67"));
        horizontalLayout_67->setContentsMargins(-1, 0, -1, -1);
        accounts = new QListWidget(accountsGB);
        accounts->setObjectName(QStringLiteral("accounts"));
        accounts->setTabKeyNavigation(true);
        accounts->setSelectionBehavior(QAbstractItemView::SelectRows);
        accounts->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);

        horizontalLayout_67->addWidget(accounts);

        verticalLayout_30 = new QVBoxLayout();
        verticalLayout_30->setObjectName(QStringLiteral("verticalLayout_30"));
        verticalLayout_30->setContentsMargins(-1, 0, 0, -1);
        deleteAccount = new QPushButton(accountsGB);
        deleteAccount->setObjectName(QStringLiteral("deleteAccount"));
        sizePolicy9.setHeightForWidth(deleteAccount->sizePolicy().hasHeightForWidth());
        deleteAccount->setSizePolicy(sizePolicy9);
        deleteAccount->setStyleSheet(QLatin1String("QPushButton {\n"
" border: 2px solid gray;\n"
" background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                   stop: 0 #E0E0E0, stop: 1 #FFFFFF);\n"
" border-radius: 5px;\n"
" margin: 2px;\n"
" padding: 2px;\n"
" }\n"
"\n"
"\n"
"\n"
"\n"
"QPushButton:hover { \n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                   stop: 0 rgb(254,229,172), stop: 1 #FFFFFF);\n"
"background-position: top center; } \n"
"\n"
"\n"
"\n"
"QPushButton:pressed {\n"
"     background-color: darkgrey;\n"
"     border-style: inset;\n"
" }\n"
""));

        verticalLayout_30->addWidget(deleteAccount);


        horizontalLayout_67->addLayout(verticalLayout_30);


        verticalLayout_37->addLayout(horizontalLayout_67);

        horizontalLayout_70 = new QHBoxLayout();
        horizontalLayout_70->setObjectName(QStringLiteral("horizontalLayout_70"));
        horizontalLayout_70->setContentsMargins(-1, 0, -1, -1);
        ota = new QCheckBox(accountsGB);
        ota->setObjectName(QStringLiteral("ota"));
        sizePolicy10.setHeightForWidth(ota->sizePolicy().hasHeightForWidth());
        ota->setSizePolicy(sizePolicy10);

        horizontalLayout_70->addWidget(ota);

        label_88 = new QLabel(accountsGB);
        label_88->setObjectName(QStringLiteral("label_88"));
        label_88->setWordWrap(true);

        horizontalLayout_70->addWidget(label_88);


        verticalLayout_37->addLayout(horizontalLayout_70);

        gridLayout_6 = new QGridLayout();
        gridLayout_6->setSpacing(5);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        label_47 = new QLabel(accountsGB);
        label_47->setObjectName(QStringLiteral("label_47"));

        gridLayout_6->addWidget(label_47, 0, 0, 1, 1);

        label_48 = new QLabel(accountsGB);
        label_48->setObjectName(QStringLiteral("label_48"));

        gridLayout_6->addWidget(label_48, 1, 0, 1, 1);

        accountName = new QLineEdit(accountsGB);
        accountName->setObjectName(QStringLiteral("accountName"));

        gridLayout_6->addWidget(accountName, 0, 1, 1, 1);

        horizontalLayout_30 = new QHBoxLayout();
        horizontalLayout_30->setObjectName(QStringLiteral("horizontalLayout_30"));
        accountPassword = new QLineEdit(accountsGB);
        accountPassword->setObjectName(QStringLiteral("accountPassword"));
        accountPassword->setEchoMode(QLineEdit::Password);

        horizontalLayout_30->addWidget(accountPassword);

        addAccount = new QPushButton(accountsGB);
        addAccount->setObjectName(QStringLiteral("addAccount"));
        sizePolicy11.setHeightForWidth(addAccount->sizePolicy().hasHeightForWidth());
        addAccount->setSizePolicy(sizePolicy11);
        addAccount->setStyleSheet(QLatin1String("QPushButton {\n"
" border: 2px solid gray;\n"
" background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                   stop: 0 #E0E0E0, stop: 1 #FFFFFF);\n"
" border-radius: 5px;\n"
" margin: 2px;\n"
" padding: 2px;\n"
" }\n"
"\n"
"\n"
"\n"
"\n"
"QPushButton:hover { \n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                   stop: 0 rgb(254,229,172), stop: 1 #FFFFFF);\n"
"background-position: top center; } \n"
"\n"
"\n"
"\n"
"QPushButton:pressed {\n"
"     background-color: darkgrey;\n"
"     border-style: inset;\n"
" }\n"
""));
        addAccount->setIcon(icon4);

        horizontalLayout_30->addWidget(addAccount);


        gridLayout_6->addLayout(horizontalLayout_30, 1, 1, 1, 1);


        verticalLayout_37->addLayout(gridLayout_6);


        verticalLayout_6->addWidget(accountsGB);

        approvedIPs = new QGroupBox(scrollAreaWidgetContents_7);
        approvedIPs->setObjectName(QStringLiteral("approvedIPs"));
        approvedIPs->setChecked(false);
        verticalLayout_36 = new QVBoxLayout(approvedIPs);
        verticalLayout_36->setSpacing(5);
        verticalLayout_36->setObjectName(QStringLiteral("verticalLayout_36"));
        verticalLayout_36->setContentsMargins(5, 5, 5, 5);
        acceptedIPList = new QListWidget(approvedIPs);
        acceptedIPList->setObjectName(QStringLiteral("acceptedIPList"));
        acceptedIPList->setTabKeyNavigation(true);
        acceptedIPList->setSelectionBehavior(QAbstractItemView::SelectRows);
        acceptedIPList->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);

        verticalLayout_36->addWidget(acceptedIPList);

        acceptedIP = new QLineEdit(approvedIPs);
        acceptedIP->setObjectName(QStringLiteral("acceptedIP"));

        verticalLayout_36->addWidget(acceptedIP);

        horizontalLayout_49 = new QHBoxLayout();
        horizontalLayout_49->setSpacing(5);
        horizontalLayout_49->setObjectName(QStringLiteral("horizontalLayout_49"));
        horizontalSpacer_37 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_49->addItem(horizontalSpacer_37);

        addAcceptedIP = new QPushButton(approvedIPs);
        addAcceptedIP->setObjectName(QStringLiteral("addAcceptedIP"));

        horizontalLayout_49->addWidget(addAcceptedIP);

        deleteAcceptedIP = new QPushButton(approvedIPs);
        deleteAcceptedIP->setObjectName(QStringLiteral("deleteAcceptedIP"));

        horizontalLayout_49->addWidget(deleteAcceptedIP);


        verticalLayout_36->addLayout(horizontalLayout_49);


        verticalLayout_6->addWidget(approvedIPs);

        aeBox = new QGroupBox(scrollAreaWidgetContents_7);
        aeBox->setObjectName(QStringLiteral("aeBox"));
        verticalLayout_63 = new QVBoxLayout(aeBox);
        verticalLayout_63->setSpacing(5);
        verticalLayout_63->setObjectName(QStringLiteral("verticalLayout_63"));
        verticalLayout_63->setContentsMargins(5, 5, 5, 5);
        label_93 = new QLabel(aeBox);
        label_93->setObjectName(QStringLiteral("label_93"));
        label_93->setWordWrap(true);

        verticalLayout_63->addWidget(label_93);

        ae_tokens = new QTableWidget(aeBox);
        if (ae_tokens->columnCount() < 3)
            ae_tokens->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem58 = new QTableWidgetItem();
        ae_tokens->setHorizontalHeaderItem(0, __qtablewidgetitem58);
        QTableWidgetItem *__qtablewidgetitem59 = new QTableWidgetItem();
        ae_tokens->setHorizontalHeaderItem(1, __qtablewidgetitem59);
        QTableWidgetItem *__qtablewidgetitem60 = new QTableWidgetItem();
        ae_tokens->setHorizontalHeaderItem(2, __qtablewidgetitem60);
        ae_tokens->setObjectName(QStringLiteral("ae_tokens"));
        ae_tokens->setTabKeyNavigation(true);
        ae_tokens->setAlternatingRowColors(true);
        ae_tokens->setSelectionMode(QAbstractItemView::SingleSelection);
        ae_tokens->setSelectionBehavior(QAbstractItemView::SelectRows);
        ae_tokens->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        ae_tokens->setSortingEnabled(true);
        ae_tokens->horizontalHeader()->setDefaultSectionSize(200);
        ae_tokens->horizontalHeader()->setStretchLastSection(true);

        verticalLayout_63->addWidget(ae_tokens);

        label_89 = new QLabel(aeBox);
        label_89->setObjectName(QStringLiteral("label_89"));
        label_89->setWordWrap(true);

        verticalLayout_63->addWidget(label_89);

        gridLayout_9 = new QGridLayout();
        gridLayout_9->setSpacing(5);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        ae_token = new QLineEdit(aeBox);
        ae_token->setObjectName(QStringLiteral("ae_token"));

        gridLayout_9->addWidget(ae_token, 0, 1, 1, 1);

        label_83 = new QLabel(aeBox);
        label_83->setObjectName(QStringLiteral("label_83"));

        gridLayout_9->addWidget(label_83, 0, 0, 1, 1);

        label_84 = new QLabel(aeBox);
        label_84->setObjectName(QStringLiteral("label_84"));

        gridLayout_9->addWidget(label_84, 1, 0, 1, 1);

        ae_e_type = new QComboBox(aeBox);
        ae_e_type->setObjectName(QStringLiteral("ae_e_type"));
        ae_e_type->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        gridLayout_9->addWidget(ae_e_type, 1, 1, 1, 1);

        label_85 = new QLabel(aeBox);
        label_85->setObjectName(QStringLiteral("label_85"));

        gridLayout_9->addWidget(label_85, 2, 0, 1, 1);

        ae_h_type = new QComboBox(aeBox);
        ae_h_type->setObjectName(QStringLiteral("ae_h_type"));
        ae_h_type->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        gridLayout_9->addWidget(ae_h_type, 2, 1, 1, 1);

        ae_listeners_magnet = new QCheckBox(aeBox);
        ae_listeners_magnet->setObjectName(QStringLiteral("ae_listeners_magnet"));

        gridLayout_9->addWidget(ae_listeners_magnet, 3, 1, 1, 1);


        verticalLayout_63->addLayout(gridLayout_9);

        horizontalLayout_81 = new QHBoxLayout();
        horizontalLayout_81->setSpacing(5);
        horizontalLayout_81->setObjectName(QStringLiteral("horizontalLayout_81"));
        horizontalSpacer_65 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_81->addItem(horizontalSpacer_65);

        addAEToken = new QPushButton(aeBox);
        addAEToken->setObjectName(QStringLiteral("addAEToken"));

        horizontalLayout_81->addWidget(addAEToken);

        deleteAEToken = new QPushButton(aeBox);
        deleteAEToken->setObjectName(QStringLiteral("deleteAEToken"));

        horizontalLayout_81->addWidget(deleteAEToken);


        verticalLayout_63->addLayout(horizontalLayout_81);


        verticalLayout_6->addWidget(aeBox);

        motdBox = new QGroupBox(scrollAreaWidgetContents_7);
        motdBox->setObjectName(QStringLiteral("motdBox"));
        verticalLayout_27 = new QVBoxLayout(motdBox);
        verticalLayout_27->setObjectName(QStringLiteral("verticalLayout_27"));
        listenersHorizontalSplitter = new QSplitter(motdBox);
        listenersHorizontalSplitter->setObjectName(QStringLiteral("listenersHorizontalSplitter"));
        listenersHorizontalSplitter->setOrientation(Qt::Horizontal);
        motd = new QPlainTextEdit(listenersHorizontalSplitter);
        motd->setObjectName(QStringLiteral("motd"));
        QFont font1;
        font1.setFamily(QStringLiteral("Monospace"));
        motd->setFont(font1);
        motd->setTabChangesFocus(true);
        listenersHorizontalSplitter->addWidget(motd);

        verticalLayout_27->addWidget(listenersHorizontalSplitter);

        horizontalLayout_80 = new QHBoxLayout();
        horizontalLayout_80->setSpacing(5);
        horizontalLayout_80->setObjectName(QStringLiteral("horizontalLayout_80"));
        horizontalSpacer_63 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_80->addItem(horizontalSpacer_63);

        saveMOTD = new QPushButton(motdBox);
        saveMOTD->setObjectName(QStringLiteral("saveMOTD"));

        horizontalLayout_80->addWidget(saveMOTD);


        verticalLayout_27->addLayout(horizontalLayout_80);


        verticalLayout_6->addWidget(motdBox);


        verticalLayout_29->addLayout(verticalLayout_6);

        scrollArea_7->setWidget(scrollAreaWidgetContents_7);

        verticalLayout_33->addWidget(scrollArea_7);

        QIcon icon29;
        icon29.addFile(QStringLiteral(":/nuvola/server_t.png"), QSize(), QIcon::Normal, QIcon::Off);
        tab->addTab(tab_createserver, icon29, QString());
        tab_neighbors = new QWidget();
        tab_neighbors->setObjectName(QStringLiteral("tab_neighbors"));
        verticalLayout_34 = new QVBoxLayout(tab_neighbors);
        verticalLayout_34->setSpacing(5);
        verticalLayout_34->setObjectName(QStringLiteral("verticalLayout_34"));
        verticalLayout_34->setContentsMargins(5, 5, 5, 5);
        label_86 = new QLabel(tab_neighbors);
        label_86->setObjectName(QStringLiteral("label_86"));
        label_86->setMinimumSize(QSize(0, 40));
        label_86->setFont(font);
        label_86->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:reflect, x1:0.023, y1:0.988636, x2:0.028, y2:0.011, stop:0 rgba(218, 232, 255, 255), stop:1 rgba(170, 85, 255, 255));\n"
"color: rgb(255, 255, 255);"));
        label_86->setIndent(5);

        verticalLayout_34->addWidget(label_86);

        line_6 = new QFrame(tab_neighbors);
        line_6->setObjectName(QStringLiteral("line_6"));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);

        verticalLayout_34->addWidget(line_6);

        scrollArea_8 = new QScrollArea(tab_neighbors);
        scrollArea_8->setObjectName(QStringLiteral("scrollArea_8"));
        scrollArea_8->setFrameShape(QFrame::NoFrame);
        scrollArea_8->setWidgetResizable(true);
        scrollAreaWidgetContents_8 = new QWidget();
        scrollAreaWidgetContents_8->setObjectName(QStringLiteral("scrollAreaWidgetContents_8"));
        scrollAreaWidgetContents_8->setGeometry(QRect(0, 0, 588, 668));
        verticalLayout_61 = new QVBoxLayout(scrollAreaWidgetContents_8);
        verticalLayout_61->setSpacing(5);
        verticalLayout_61->setObjectName(QStringLiteral("verticalLayout_61"));
        verticalLayout_61->setContentsMargins(5, 5, 5, 5);
        neighborsVerticalSplitter = new QSplitter(scrollAreaWidgetContents_8);
        neighborsVerticalSplitter->setObjectName(QStringLiteral("neighborsVerticalSplitter"));
        neighborsVerticalSplitter->setOrientation(Qt::Vertical);
        layoutWidget1 = new QWidget(neighborsVerticalSplitter);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        verticalLayout_57 = new QVBoxLayout(layoutWidget1);
        verticalLayout_57->setSpacing(5);
        verticalLayout_57->setObjectName(QStringLiteral("verticalLayout_57"));
        verticalLayout_57->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_26 = new QHBoxLayout();
        horizontalLayout_26->setSpacing(5);
        horizontalLayout_26->setObjectName(QStringLiteral("horizontalLayout_26"));
        neighborsActionMenu = new QToolButton(layoutWidget1);
        neighborsActionMenu->setObjectName(QStringLiteral("neighborsActionMenu"));
        neighborsActionMenu->setIcon(icon12);
        neighborsActionMenu->setPopupMode(QToolButton::MenuButtonPopup);
        neighborsActionMenu->setAutoRaise(true);

        horizontalLayout_26->addWidget(neighborsActionMenu);

        shareBuzzMagnet = new QPushButton(layoutWidget1);
        shareBuzzMagnet->setObjectName(QStringLiteral("shareBuzzMagnet"));

        horizontalLayout_26->addWidget(shareBuzzMagnet);

        horizontalSpacer_22 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_26->addItem(horizontalSpacer_22);


        verticalLayout_57->addLayout(horizontalLayout_26);

        horizontalLayout_48 = new QHBoxLayout();
        horizontalLayout_48->setSpacing(5);
        horizontalLayout_48->setObjectName(QStringLiteral("horizontalLayout_48"));
        neighbors = new QTableWidget(layoutWidget1);
        if (neighbors->columnCount() < 42)
            neighbors->setColumnCount(42);
        QTableWidgetItem *__qtablewidgetitem61 = new QTableWidgetItem();
        neighbors->setHorizontalHeaderItem(0, __qtablewidgetitem61);
        QTableWidgetItem *__qtablewidgetitem62 = new QTableWidgetItem();
        neighbors->setHorizontalHeaderItem(1, __qtablewidgetitem62);
        QTableWidgetItem *__qtablewidgetitem63 = new QTableWidgetItem();
        neighbors->setHorizontalHeaderItem(2, __qtablewidgetitem63);
        QTableWidgetItem *__qtablewidgetitem64 = new QTableWidgetItem();
        neighbors->setHorizontalHeaderItem(3, __qtablewidgetitem64);
        QTableWidgetItem *__qtablewidgetitem65 = new QTableWidgetItem();
        neighbors->setHorizontalHeaderItem(4, __qtablewidgetitem65);
        QTableWidgetItem *__qtablewidgetitem66 = new QTableWidgetItem();
        neighbors->setHorizontalHeaderItem(5, __qtablewidgetitem66);
        QTableWidgetItem *__qtablewidgetitem67 = new QTableWidgetItem();
        neighbors->setHorizontalHeaderItem(6, __qtablewidgetitem67);
        QTableWidgetItem *__qtablewidgetitem68 = new QTableWidgetItem();
        neighbors->setHorizontalHeaderItem(7, __qtablewidgetitem68);
        QTableWidgetItem *__qtablewidgetitem69 = new QTableWidgetItem();
        neighbors->setHorizontalHeaderItem(8, __qtablewidgetitem69);
        QTableWidgetItem *__qtablewidgetitem70 = new QTableWidgetItem();
        neighbors->setHorizontalHeaderItem(9, __qtablewidgetitem70);
        QTableWidgetItem *__qtablewidgetitem71 = new QTableWidgetItem();
        neighbors->setHorizontalHeaderItem(10, __qtablewidgetitem71);
        QTableWidgetItem *__qtablewidgetitem72 = new QTableWidgetItem();
        neighbors->setHorizontalHeaderItem(11, __qtablewidgetitem72);
        QTableWidgetItem *__qtablewidgetitem73 = new QTableWidgetItem();
        neighbors->setHorizontalHeaderItem(12, __qtablewidgetitem73);
        QTableWidgetItem *__qtablewidgetitem74 = new QTableWidgetItem();
        neighbors->setHorizontalHeaderItem(13, __qtablewidgetitem74);
        QTableWidgetItem *__qtablewidgetitem75 = new QTableWidgetItem();
        neighbors->setHorizontalHeaderItem(14, __qtablewidgetitem75);
        QTableWidgetItem *__qtablewidgetitem76 = new QTableWidgetItem();
        neighbors->setHorizontalHeaderItem(15, __qtablewidgetitem76);
        QTableWidgetItem *__qtablewidgetitem77 = new QTableWidgetItem();
        neighbors->setHorizontalHeaderItem(16, __qtablewidgetitem77);
        QTableWidgetItem *__qtablewidgetitem78 = new QTableWidgetItem();
        neighbors->setHorizontalHeaderItem(17, __qtablewidgetitem78);
        QTableWidgetItem *__qtablewidgetitem79 = new QTableWidgetItem();
        neighbors->setHorizontalHeaderItem(18, __qtablewidgetitem79);
        QTableWidgetItem *__qtablewidgetitem80 = new QTableWidgetItem();
        neighbors->setHorizontalHeaderItem(19, __qtablewidgetitem80);
        QTableWidgetItem *__qtablewidgetitem81 = new QTableWidgetItem();
        neighbors->setHorizontalHeaderItem(20, __qtablewidgetitem81);
        QTableWidgetItem *__qtablewidgetitem82 = new QTableWidgetItem();
        neighbors->setHorizontalHeaderItem(21, __qtablewidgetitem82);
        QTableWidgetItem *__qtablewidgetitem83 = new QTableWidgetItem();
        neighbors->setHorizontalHeaderItem(22, __qtablewidgetitem83);
        QTableWidgetItem *__qtablewidgetitem84 = new QTableWidgetItem();
        neighbors->setHorizontalHeaderItem(23, __qtablewidgetitem84);
        QTableWidgetItem *__qtablewidgetitem85 = new QTableWidgetItem();
        neighbors->setHorizontalHeaderItem(24, __qtablewidgetitem85);
        QTableWidgetItem *__qtablewidgetitem86 = new QTableWidgetItem();
        neighbors->setHorizontalHeaderItem(25, __qtablewidgetitem86);
        QTableWidgetItem *__qtablewidgetitem87 = new QTableWidgetItem();
        neighbors->setHorizontalHeaderItem(26, __qtablewidgetitem87);
        QTableWidgetItem *__qtablewidgetitem88 = new QTableWidgetItem();
        neighbors->setHorizontalHeaderItem(27, __qtablewidgetitem88);
        QTableWidgetItem *__qtablewidgetitem89 = new QTableWidgetItem();
        neighbors->setHorizontalHeaderItem(28, __qtablewidgetitem89);
        QTableWidgetItem *__qtablewidgetitem90 = new QTableWidgetItem();
        neighbors->setHorizontalHeaderItem(29, __qtablewidgetitem90);
        QTableWidgetItem *__qtablewidgetitem91 = new QTableWidgetItem();
        neighbors->setHorizontalHeaderItem(30, __qtablewidgetitem91);
        QTableWidgetItem *__qtablewidgetitem92 = new QTableWidgetItem();
        neighbors->setHorizontalHeaderItem(31, __qtablewidgetitem92);
        QTableWidgetItem *__qtablewidgetitem93 = new QTableWidgetItem();
        neighbors->setHorizontalHeaderItem(32, __qtablewidgetitem93);
        QTableWidgetItem *__qtablewidgetitem94 = new QTableWidgetItem();
        neighbors->setHorizontalHeaderItem(33, __qtablewidgetitem94);
        QTableWidgetItem *__qtablewidgetitem95 = new QTableWidgetItem();
        neighbors->setHorizontalHeaderItem(34, __qtablewidgetitem95);
        QTableWidgetItem *__qtablewidgetitem96 = new QTableWidgetItem();
        neighbors->setHorizontalHeaderItem(35, __qtablewidgetitem96);
        QTableWidgetItem *__qtablewidgetitem97 = new QTableWidgetItem();
        neighbors->setHorizontalHeaderItem(36, __qtablewidgetitem97);
        QTableWidgetItem *__qtablewidgetitem98 = new QTableWidgetItem();
        neighbors->setHorizontalHeaderItem(37, __qtablewidgetitem98);
        QTableWidgetItem *__qtablewidgetitem99 = new QTableWidgetItem();
        neighbors->setHorizontalHeaderItem(38, __qtablewidgetitem99);
        QTableWidgetItem *__qtablewidgetitem100 = new QTableWidgetItem();
        neighbors->setHorizontalHeaderItem(39, __qtablewidgetitem100);
        QTableWidgetItem *__qtablewidgetitem101 = new QTableWidgetItem();
        neighbors->setHorizontalHeaderItem(40, __qtablewidgetitem101);
        QTableWidgetItem *__qtablewidgetitem102 = new QTableWidgetItem();
        neighbors->setHorizontalHeaderItem(41, __qtablewidgetitem102);
        neighbors->setObjectName(QStringLiteral("neighbors"));
        neighbors->setMaximumSize(QSize(16777215, 16777215));
        neighbors->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        neighbors->setAlternatingRowColors(true);
        neighbors->setSelectionMode(QAbstractItemView::SingleSelection);
        neighbors->setSelectionBehavior(QAbstractItemView::SelectRows);
        neighbors->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        neighbors->setSortingEnabled(true);
        neighbors->horizontalHeader()->setDefaultSectionSize(280);
        neighbors->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        neighbors->horizontalHeader()->setStretchLastSection(true);

        horizontalLayout_48->addWidget(neighbors);

        neighborSummary = new QTextBrowser(layoutWidget1);
        neighborSummary->setObjectName(QStringLiteral("neighborSummary"));
        QSizePolicy sizePolicy12(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy12.setHorizontalStretch(0);
        sizePolicy12.setVerticalStretch(0);
        sizePolicy12.setHeightForWidth(neighborSummary->sizePolicy().hasHeightForWidth());
        neighborSummary->setSizePolicy(sizePolicy12);
        neighborSummary->setFont(font1);
        neighborSummary->setTabChangesFocus(true);
        neighborSummary->setOpenLinks(false);

        horizontalLayout_48->addWidget(neighborSummary);


        verticalLayout_57->addLayout(horizontalLayout_48);

        neighborsVerticalSplitter->addWidget(layoutWidget1);
        splitter_3 = new QSplitter(neighborsVerticalSplitter);
        splitter_3->setObjectName(QStringLiteral("splitter_3"));
        splitter_3->setStyleSheet(QStringLiteral(""));
        splitter_3->setFrameShape(QFrame::NoFrame);
        splitter_3->setFrameShadow(QFrame::Plain);
        splitter_3->setLineWidth(1);
        splitter_3->setOrientation(Qt::Vertical);
        splitter_3->setChildrenCollapsible(false);
        layoutWidget1b = new QWidget(splitter_3);
        layoutWidget1b->setObjectName(QStringLiteral("layoutWidget1b"));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1b);
        horizontalLayout_2->setSpacing(5);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        groupBox_addip_2 = new QGroupBox(layoutWidget1b);
        groupBox_addip_2->setObjectName(QStringLiteral("groupBox_addip_2"));
        verticalLayout_21 = new QVBoxLayout(groupBox_addip_2);
        verticalLayout_21->setSpacing(5);
        verticalLayout_21->setObjectName(QStringLiteral("verticalLayout_21"));
        verticalLayout_21->setContentsMargins(5, 5, 5, 5);
        label_23 = new QLabel(groupBox_addip_2);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setWordWrap(true);

        verticalLayout_21->addWidget(label_23);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(5);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        neighborIP = new QLineEdit(groupBox_addip_2);
        neighborIP->setObjectName(QStringLiteral("neighborIP"));
        neighborIP->setStyleSheet(QLatin1String("QLineEdit#neighborIP {\n"
"     background-color: rgb(255, 255, 195);\n"
"     border-style: outset;\n"
"     border-width: 2px;\n"
"     border-radius: 10px;\n"
"     border-color: black;\n"
"     min-width: 10em;\n"
"     padding: 6px;\n"
" }\n"
"\n"
""));

        gridLayout_3->addWidget(neighborIP, 0, 1, 1, 1);

        label_24 = new QLabel(groupBox_addip_2);
        label_24->setObjectName(QStringLiteral("label_24"));
        sizePolicy6.setHeightForWidth(label_24->sizePolicy().hasHeightForWidth());
        label_24->setSizePolicy(sizePolicy6);
        label_24->setLayoutDirection(Qt::RightToLeft);

        gridLayout_3->addWidget(label_24, 0, 0, 1, 1);

        neighborPort = new QSpinBox(groupBox_addip_2);
        neighborPort->setObjectName(QStringLiteral("neighborPort"));
        neighborPort->setMinimum(1);
        neighborPort->setMaximum(65535);
        neighborPort->setValue(4710);

        gridLayout_3->addWidget(neighborPort, 0, 3, 1, 1);

        label_13 = new QLabel(groupBox_addip_2);
        label_13->setObjectName(QStringLiteral("label_13"));
        sizePolicy6.setHeightForWidth(label_13->sizePolicy().hasHeightForWidth());
        label_13->setSizePolicy(sizePolicy6);
        label_13->setLayoutDirection(Qt::RightToLeft);

        gridLayout_3->addWidget(label_13, 0, 2, 1, 1);

        neighborScopeIdLabel = new QLabel(groupBox_addip_2);
        neighborScopeIdLabel->setObjectName(QStringLiteral("neighborScopeIdLabel"));

        gridLayout_3->addWidget(neighborScopeIdLabel, 1, 0, 1, 1);

        neighborScopeId = new QLineEdit(groupBox_addip_2);
        neighborScopeId->setObjectName(QStringLiteral("neighborScopeId"));

        gridLayout_3->addWidget(neighborScopeId, 1, 1, 1, 1);

        label_66 = new QLabel(groupBox_addip_2);
        label_66->setObjectName(QStringLiteral("label_66"));

        gridLayout_3->addWidget(label_66, 2, 0, 1, 1);

        horizontalLayout_60 = new QHBoxLayout();
        horizontalLayout_60->setSpacing(5);
        horizontalLayout_60->setObjectName(QStringLiteral("horizontalLayout_60"));
        neighborTransport = new QComboBox(groupBox_addip_2);
        neighborTransport->setObjectName(QStringLiteral("neighborTransport"));
        neighborTransport->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        horizontalLayout_60->addWidget(neighborTransport);

        label_70 = new QLabel(groupBox_addip_2);
        label_70->setObjectName(QStringLiteral("label_70"));

        horizontalLayout_60->addWidget(label_70);

        neighborOrientation = new QComboBox(groupBox_addip_2);
        neighborOrientation->setObjectName(QStringLiteral("neighborOrientation"));
        neighborOrientation->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        horizontalLayout_60->addWidget(neighborOrientation);

        horizontalSpacer_50 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_60->addItem(horizontalSpacer_50);


        gridLayout_3->addLayout(horizontalLayout_60, 2, 1, 1, 1);

        ipv6Neighbor = new QRadioButton(groupBox_addip_2);
        ipv6Neighbor->setObjectName(QStringLiteral("ipv6Neighbor"));
        sizePolicy6.setHeightForWidth(ipv6Neighbor->sizePolicy().hasHeightForWidth());
        ipv6Neighbor->setSizePolicy(sizePolicy6);
        ipv6Neighbor->setLayoutDirection(Qt::LeftToRight);

        gridLayout_3->addWidget(ipv6Neighbor, 1, 4, 1, 1);

        dynamicdns = new QRadioButton(groupBox_addip_2);
        dynamicdns->setObjectName(QStringLiteral("dynamicdns"));
        sizePolicy6.setHeightForWidth(dynamicdns->sizePolicy().hasHeightForWidth());
        dynamicdns->setSizePolicy(sizePolicy6);

        gridLayout_3->addWidget(dynamicdns, 2, 4, 1, 1);

        ipv4Neighbor = new QRadioButton(groupBox_addip_2);
        ipv4Neighbor->setObjectName(QStringLiteral("ipv4Neighbor"));
        sizePolicy6.setHeightForWidth(ipv4Neighbor->sizePolicy().hasHeightForWidth());
        ipv4Neighbor->setSizePolicy(sizePolicy6);
        ipv4Neighbor->setLayoutDirection(Qt::LeftToRight);
        ipv4Neighbor->setChecked(true);

        gridLayout_3->addWidget(ipv4Neighbor, 0, 4, 1, 1);


        verticalLayout_21->addLayout(gridLayout_3);

        horizontalLayout_35 = new QHBoxLayout();
        horizontalLayout_35->setSpacing(5);
        horizontalLayout_35->setObjectName(QStringLiteral("horizontalLayout_35"));
        label_39 = new QLabel(groupBox_addip_2);
        label_39->setObjectName(QStringLiteral("label_39"));
        sizePolicy10.setHeightForWidth(label_39->sizePolicy().hasHeightForWidth());
        label_39->setSizePolicy(sizePolicy10);

        horizontalLayout_35->addWidget(label_39);

        neighborsEchoMode = new QComboBox(groupBox_addip_2);
        neighborsEchoMode->setObjectName(QStringLiteral("neighborsEchoMode"));
        neighborsEchoMode->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        horizontalLayout_35->addWidget(neighborsEchoMode);

        addException = new QCheckBox(groupBox_addip_2);
        addException->setObjectName(QStringLiteral("addException"));
        sizePolicy6.setHeightForWidth(addException->sizePolicy().hasHeightForWidth());
        addException->setSizePolicy(sizePolicy6);

        horizontalLayout_35->addWidget(addException);

        requireSsl = new QCheckBox(groupBox_addip_2);
        requireSsl->setObjectName(QStringLiteral("requireSsl"));
        sizePolicy6.setHeightForWidth(requireSsl->sizePolicy().hasHeightForWidth());
        requireSsl->setSizePolicy(sizePolicy6);
        requireSsl->setChecked(true);

        horizontalLayout_35->addWidget(requireSsl);

        sslKeySizeLabel = new QLabel(groupBox_addip_2);
        sslKeySizeLabel->setObjectName(QStringLiteral("sslKeySizeLabel"));

        horizontalLayout_35->addWidget(sslKeySizeLabel);

        neighborKeySize = new QComboBox(groupBox_addip_2);
        neighborKeySize->setObjectName(QStringLiteral("neighborKeySize"));
        neighborKeySize->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        horizontalLayout_35->addWidget(neighborKeySize);


        verticalLayout_21->addLayout(horizontalLayout_35);

        horizontalLayout_89 = new QHBoxLayout();
        horizontalLayout_89->setSpacing(5);
        horizontalLayout_89->setObjectName(QStringLiteral("horizontalLayout_89"));
        label_78 = new QLabel(groupBox_addip_2);
        label_78->setObjectName(QStringLiteral("label_78"));

        horizontalLayout_89->addWidget(label_78);

        neighborsSslControlString = new QLineEdit(groupBox_addip_2);
        neighborsSslControlString->setObjectName(QStringLiteral("neighborsSslControlString"));

        horizontalLayout_89->addWidget(neighborsSslControlString);


        verticalLayout_21->addLayout(horizontalLayout_89);

        proxy = new QGroupBox(groupBox_addip_2);
        proxy->setObjectName(QStringLiteral("proxy"));
        proxy->setCheckable(true);
        proxy->setChecked(false);
        gridLayout_5 = new QGridLayout(proxy);
        gridLayout_5->setSpacing(5);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setContentsMargins(5, 5, 5, 5);
        label_7 = new QLabel(proxy);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_5->addWidget(label_7, 1, 0, 1, 1);

        label_19 = new QLabel(proxy);
        label_19->setObjectName(QStringLiteral("label_19"));

        gridLayout_5->addWidget(label_19, 2, 0, 1, 1);

        horizontalLayout_39 = new QHBoxLayout();
        horizontalLayout_39->setSpacing(5);
        horizontalLayout_39->setObjectName(QStringLiteral("horizontalLayout_39"));
        proxyPort = new QSpinBox(proxy);
        proxyPort->setObjectName(QStringLiteral("proxyPort"));
        proxyPort->setMinimum(1);
        proxyPort->setMaximum(65535);

        horizontalLayout_39->addWidget(proxyPort);

        horizontalSpacer_29 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_39->addItem(horizontalSpacer_29);


        gridLayout_5->addLayout(horizontalLayout_39, 1, 3, 1, 1);

        horizontalLayout_29 = new QHBoxLayout();
        horizontalLayout_29->setSpacing(5);
        horizontalLayout_29->setObjectName(QStringLiteral("horizontalLayout_29"));
        proxyType = new QComboBox(proxy);
        proxyType->setObjectName(QStringLiteral("proxyType"));
        proxyType->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        horizontalLayout_29->addWidget(proxyType);

        horizontalSpacer_28 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_29->addItem(horizontalSpacer_28);


        gridLayout_5->addLayout(horizontalLayout_29, 0, 1, 1, 1);

        label_3 = new QLabel(proxy);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_5->addWidget(label_3, 0, 0, 1, 1);

        proxyHostname = new QLineEdit(proxy);
        proxyHostname->setObjectName(QStringLiteral("proxyHostname"));

        gridLayout_5->addWidget(proxyHostname, 1, 1, 1, 1);

        proxyPassword = new QLineEdit(proxy);
        proxyPassword->setObjectName(QStringLiteral("proxyPassword"));
        proxyPassword->setEchoMode(QLineEdit::Password);

        gridLayout_5->addWidget(proxyPassword, 2, 3, 1, 1);

        label_20 = new QLabel(proxy);
        label_20->setObjectName(QStringLiteral("label_20"));

        gridLayout_5->addWidget(label_20, 2, 2, 1, 1);

        proxyUsername = new QLineEdit(proxy);
        proxyUsername->setObjectName(QStringLiteral("proxyUsername"));

        gridLayout_5->addWidget(proxyUsername, 2, 1, 1, 1);

        label_8 = new QLabel(proxy);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_5->addWidget(label_8, 1, 2, 1, 1);


        verticalLayout_21->addWidget(proxy);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(5);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        addNeighbor = new QPushButton(groupBox_addip_2);
        addNeighbor->setObjectName(QStringLiteral("addNeighbor"));
        addNeighbor->setStyleSheet(QLatin1String("QPushButton#addNeighbor {\n"
"     background-color: rgb(255, 255, 195);\n"
"     border-style: outset;\n"
"     border-width: 2px;\n"
"     border-radius: 10px;\n"
"     border-color: black;\n"
"     min-width: 10em;\n"
"     padding: 6px;\n"
" }\n"
"\n"
"\n"
"QPushButton#addNeighbor:hover { \n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                   stop: 0 rgb(254,229,172), stop: 1 #FFFFFF);\n"
"background-position: top center; } \n"
"\n"
"\n"
"\n"
"QPushButton#addNeighbor:pressed {\n"
"     background-color: darkgrey;\n"
"     border-style: inset;\n"
" }\n"
"\n"
""));
        QIcon icon30;
        icon30.addFile(QStringLiteral(":/nuvola/connect.png"), QSize(), QIcon::Normal, QIcon::Off);
        addNeighbor->setIcon(icon30);
        addNeighbor->setIconSize(QSize(40, 40));

        horizontalLayout_6->addWidget(addNeighbor);


        verticalLayout_21->addLayout(horizontalLayout_6);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_21->addItem(verticalSpacer_8);


        horizontalLayout_2->addWidget(groupBox_addip_2);

        splitter_3->addWidget(layoutWidget1b);
        neighborsVerticalSplitter->addWidget(splitter_3);

        verticalLayout_61->addWidget(neighborsVerticalSplitter);

        scrollArea_8->setWidget(scrollAreaWidgetContents_8);

        verticalLayout_34->addWidget(scrollArea_8);

        QIcon icon31;
        icon31.addFile(QStringLiteral(":/nuvola/connect_t.png"), QSize(), QIcon::Normal, QIcon::Off);
        tab->addTab(tab_neighbors, icon31, QString());
        tab_search = new QWidget();
        tab_search->setObjectName(QStringLiteral("tab_search"));
        verticalLayout = new QVBoxLayout(tab_search);
        verticalLayout->setSpacing(5);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(5, 5, 5, 5);
        label_119 = new QLabel(tab_search);
        label_119->setObjectName(QStringLiteral("label_119"));
        label_119->setMinimumSize(QSize(0, 40));
        label_119->setFont(font);
        label_119->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:reflect, x1:0.023, y1:0.988636, x2:0.028, y2:0.011, stop:0 rgba(218, 232, 255, 255), stop:1 rgba(170, 85, 255, 255));\n"
"color: rgb(255, 255, 255);\n"
""));
        label_119->setIndent(5);

        verticalLayout->addWidget(label_119);

        line_8 = new QFrame(tab_search);
        line_8->setObjectName(QStringLiteral("line_8"));
        line_8->setFrameShape(QFrame::HLine);
        line_8->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_8);

        scrollArea_9 = new QScrollArea(tab_search);
        scrollArea_9->setObjectName(QStringLiteral("scrollArea_9"));
        scrollArea_9->setFrameShape(QFrame::NoFrame);
        scrollArea_9->setWidgetResizable(true);
        scrollAreaWidgetContents_9 = new QWidget();
        scrollAreaWidgetContents_9->setObjectName(QStringLiteral("scrollAreaWidgetContents_9"));
        scrollAreaWidgetContents_9->setGeometry(QRect(0, 0, 628, 668));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents_9);
        verticalLayout_2->setSpacing(5);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(5, 5, 5, 5);
        urls_settings_layout = new QHBoxLayout();
        urls_settings_layout->setSpacing(5);
        urls_settings_layout->setObjectName(QStringLiteral("urls_settings_layout"));
        showUrlSettings = new QPushButton(scrollAreaWidgetContents_9);
        showUrlSettings->setObjectName(QStringLiteral("showUrlSettings"));
        showUrlSettings->setCheckable(true);

        urls_settings_layout->addWidget(showUrlSettings);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        urls_settings_layout->addItem(horizontalSpacer_2);

        url_database_connection_information = new QLabel(scrollAreaWidgetContents_9);
        url_database_connection_information->setObjectName(QStringLiteral("url_database_connection_information"));
        QFont font2;
        font2.setBold(true);
        font2.setWeight(75);
        url_database_connection_information->setFont(font2);

        urls_settings_layout->addWidget(url_database_connection_information);

        horizontalSpacer_73 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        urls_settings_layout->addItem(horizontalSpacer_73);


        verticalLayout_2->addLayout(urls_settings_layout);

        urlSettings = new QScrollArea(scrollAreaWidgetContents_9);
        urlSettings->setObjectName(QStringLiteral("urlSettings"));
        urlSettings->setFrameShape(QFrame::NoFrame);
        urlSettings->setWidgetResizable(true);
        scrollAreaWidgetContents_12 = new QWidget();
        scrollAreaWidgetContents_12->setObjectName(QStringLiteral("scrollAreaWidgetContents_12"));
        scrollAreaWidgetContents_12->setGeometry(QRect(0, 0, 630, 508));
        verticalLayout_65 = new QVBoxLayout(scrollAreaWidgetContents_12);
        verticalLayout_65->setSpacing(5);
        verticalLayout_65->setObjectName(QStringLiteral("verticalLayout_65"));
        verticalLayout_65->setContentsMargins(5, 5, 5, 5);
        postgresql_recommendation_label = new QLabel(scrollAreaWidgetContents_12);
        postgresql_recommendation_label->setObjectName(QStringLiteral("postgresql_recommendation_label"));
        postgresql_recommendation_label->setWordWrap(true);
        postgresql_recommendation_label->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        verticalLayout_65->addWidget(postgresql_recommendation_label);

        groupBox_15 = new QGroupBox(scrollAreaWidgetContents_12);
        groupBox_15->setObjectName(QStringLiteral("groupBox_15"));
        QSizePolicy sizePolicy13(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy13.setHorizontalStretch(0);
        sizePolicy13.setVerticalStretch(0);
        sizePolicy13.setHeightForWidth(groupBox_15->sizePolicy().hasHeightForWidth());
        groupBox_15->setSizePolicy(sizePolicy13);
        horizontalLayout_87 = new QHBoxLayout(groupBox_15);
        horizontalLayout_87->setSpacing(5);
        horizontalLayout_87->setObjectName(QStringLiteral("horizontalLayout_87"));
        horizontalLayout_87->setContentsMargins(5, 5, 5, 5);
        label_105 = new QLabel(groupBox_15);
        label_105->setObjectName(QStringLiteral("label_105"));
        sizePolicy9.setHeightForWidth(label_105->sizePolicy().hasHeightForWidth());
        label_105->setSizePolicy(sizePolicy9);
        label_105->setStyleSheet(QLatin1String("QLabel {\n"
" border: 1px solid gray;\n"
" background-color: lightgreen;\n"
" margin: 2px;\n"
" padding: 2px;\n"
" }"));

        horizontalLayout_87->addWidget(label_105);

        urls_db_type = new QComboBox(groupBox_15);
        urls_db_type->setObjectName(QStringLiteral("urls_db_type"));
        urls_db_type->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        horizontalLayout_87->addWidget(urls_db_type);

        postgresqlConnect = new QPushButton(groupBox_15);
        postgresqlConnect->setObjectName(QStringLiteral("postgresqlConnect"));
        postgresqlConnect->setEnabled(false);

        horizontalLayout_87->addWidget(postgresqlConnect);

        label_120 = new QLabel(groupBox_15);
        label_120->setObjectName(QStringLiteral("label_120"));
        sizePolicy9.setHeightForWidth(label_120->sizePolicy().hasHeightForWidth());
        label_120->setSizePolicy(sizePolicy9);
        label_120->setStyleSheet(QLatin1String("QLabel {\n"
" border: 1px solid gray;\n"
" background-color: lightgreen;\n"
" margin: 2px;\n"
" padding: 2px;\n"
" }"));

        horizontalLayout_87->addWidget(label_120);

        prepareUrlDatabases = new QPushButton(groupBox_15);
        prepareUrlDatabases->setObjectName(QStringLiteral("prepareUrlDatabases"));
        prepareUrlDatabases->setStyleSheet(QLatin1String("QPushButton {\n"
" border: 2px solid gray;\n"
" background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                   stop: 0 #E0E0E0, stop: 1 #FFFFFF);\n"
" border-radius: 5px;\n"
"\n"
" padding: 2px;\n"
" }\n"
"\n"
"\n"
"QPushButton:hover { \n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                   stop: 0 rgb(254,229,172), stop: 1 #FFFFFF);\n"
"background-position: top center; } \n"
"\n"
"QPushButton:pressed {\n"
"     background-color: darkgrey;\n"
"     border-style: inset;\n"
" }"));

        horizontalLayout_87->addWidget(prepareUrlDatabases);

        horizontalSpacer_71 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_87->addItem(horizontalSpacer_71);

        correctUrlDatabases = new QPushButton(groupBox_15);
        correctUrlDatabases->setObjectName(QStringLiteral("correctUrlDatabases"));
        correctUrlDatabases->setStyleSheet(QLatin1String("QPushButton {\n"
" border: 2px solid gray;\n"
" background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                   stop: 0 #E0E0E0, stop: 1 #FFFFFF);\n"
" border-radius: 5px;\n"
"\n"
" padding: 2px;\n"
" }\n"
"\n"
"\n"
"QPushButton:hover { \n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                   stop: 0 rgb(254,229,172), stop: 1 #FFFFFF);\n"
"background-position: top center; } \n"
"\n"
"QPushButton:pressed {\n"
"     background-color: darkgrey;\n"
"     border-style: inset;\n"
" }"));

        horizontalLayout_87->addWidget(correctUrlDatabases);

        deleteAllUrls = new QToolButton(groupBox_15);
        deleteAllUrls->setObjectName(QStringLiteral("deleteAllUrls"));
        deleteAllUrls->setStyleSheet(QLatin1String("QPushButton {\n"
" border: 2px solid gray;\n"
" background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                   stop: 0 #E0E0E0, stop: 1 #FFFFFF);\n"
" border-radius: 5px;\n"
"\n"
" padding: 2px;\n"
" }\n"
"\n"
"\n"
"QPushButton:hover { \n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                   stop: 0 rgb(254,229,172), stop: 1 #FFFFFF);\n"
"background-position: top center; } \n"
"\n"
"QPushButton:pressed {\n"
"     background-color: darkgrey;\n"
"     border-style: inset;\n"
" }"));
        deleteAllUrls->setIcon(icon12);
        deleteAllUrls->setPopupMode(QToolButton::MenuButtonPopup);
        deleteAllUrls->setAutoRaise(true);

        horizontalLayout_87->addWidget(deleteAllUrls);


        verticalLayout_65->addWidget(groupBox_15);

        groupBox_14 = new QGroupBox(scrollAreaWidgetContents_12);
        groupBox_14->setObjectName(QStringLiteral("groupBox_14"));
        sizePolicy13.setHeightForWidth(groupBox_14->sizePolicy().hasHeightForWidth());
        groupBox_14->setSizePolicy(sizePolicy13);
        verticalLayout_67 = new QVBoxLayout(groupBox_14);
        verticalLayout_67->setSpacing(5);
        verticalLayout_67->setObjectName(QStringLiteral("verticalLayout_67"));
        verticalLayout_67->setContentsMargins(5, 5, 5, 5);
        commonCredentialsLabel = new QLabel(groupBox_14);
        commonCredentialsLabel->setObjectName(QStringLiteral("commonCredentialsLabel"));
        commonCredentialsLabel->setFont(font2);

        verticalLayout_67->addWidget(commonCredentialsLabel);

        horizontalLayout_96 = new QHBoxLayout();
        horizontalLayout_96->setSpacing(5);
        horizontalLayout_96->setObjectName(QStringLiteral("horizontalLayout_96"));
        label_134 = new QLabel(groupBox_14);
        label_134->setObjectName(QStringLiteral("label_134"));
        sizePolicy9.setHeightForWidth(label_134->sizePolicy().hasHeightForWidth());
        label_134->setSizePolicy(sizePolicy9);
        label_134->setStyleSheet(QLatin1String("QLabel {\n"
" border: 1px solid gray;\n"
" background-color: lightgreen;\n"
" margin: 2px;\n"
" padding: 2px;\n"
" }"));

        horizontalLayout_96->addWidget(label_134);

        label_131 = new QLabel(groupBox_14);
        label_131->setObjectName(QStringLiteral("label_131"));
        label_131->setWordWrap(true);

        horizontalLayout_96->addWidget(label_131);


        verticalLayout_67->addLayout(horizontalLayout_96);

        horizontalLayout_97 = new QHBoxLayout();
        horizontalLayout_97->setSpacing(5);
        horizontalLayout_97->setObjectName(QStringLiteral("horizontalLayout_97"));
        label_132 = new QLabel(groupBox_14);
        label_132->setObjectName(QStringLiteral("label_132"));

        horizontalLayout_97->addWidget(label_132);

        commonUrlPassphrase = new QLineEdit(groupBox_14);
        commonUrlPassphrase->setObjectName(QStringLiteral("commonUrlPassphrase"));

        horizontalLayout_97->addWidget(commonUrlPassphrase);

        label_133 = new QLabel(groupBox_14);
        label_133->setObjectName(QStringLiteral("label_133"));

        horizontalLayout_97->addWidget(label_133);

        commonUrlPin = new QLineEdit(groupBox_14);
        commonUrlPin->setObjectName(QStringLiteral("commonUrlPin"));

        horizontalLayout_97->addWidget(commonUrlPin);

        saveCommonUrlCredentials = new QPushButton(groupBox_14);
        saveCommonUrlCredentials->setObjectName(QStringLiteral("saveCommonUrlCredentials"));
        sizePolicy1.setHeightForWidth(saveCommonUrlCredentials->sizePolicy().hasHeightForWidth());
        saveCommonUrlCredentials->setSizePolicy(sizePolicy1);
        saveCommonUrlCredentials->setStyleSheet(QLatin1String("QPushButton {\n"
" border: 2px solid gray;\n"
" background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                   stop: 0 #E0E0E0, stop: 1 #FFFFFF);\n"
" border-radius: 5px;\n"
"\n"
" padding: 2px;\n"
" }\n"
"\n"
"\n"
"QPushButton:hover { \n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                   stop: 0 rgb(254,229,172), stop: 1 #FFFFFF);\n"
"background-position: top center; } \n"
"\n"
"QPushButton:pressed {\n"
"     background-color: darkgrey;\n"
"     border-style: inset;\n"
" }"));

        horizontalLayout_97->addWidget(saveCommonUrlCredentials);


        verticalLayout_67->addLayout(horizontalLayout_97);

        horizontalLayout_99 = new QHBoxLayout();
        horizontalLayout_99->setSpacing(5);
        horizontalLayout_99->setObjectName(QStringLiteral("horizontalLayout_99"));
        label_138 = new QLabel(groupBox_14);
        label_138->setObjectName(QStringLiteral("label_138"));

        horizontalLayout_99->addWidget(label_138);

        commonUrlCipher = new QComboBox(groupBox_14);
        commonUrlCipher->setObjectName(QStringLiteral("commonUrlCipher"));
        commonUrlCipher->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        horizontalLayout_99->addWidget(commonUrlCipher);

        label_139 = new QLabel(groupBox_14);
        label_139->setObjectName(QStringLiteral("label_139"));

        horizontalLayout_99->addWidget(label_139);

        commonUrlHash = new QComboBox(groupBox_14);
        commonUrlHash->setObjectName(QStringLiteral("commonUrlHash"));
        commonUrlHash->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        horizontalLayout_99->addWidget(commonUrlHash);

        label_140 = new QLabel(groupBox_14);
        label_140->setObjectName(QStringLiteral("label_140"));

        horizontalLayout_99->addWidget(label_140);

        commonUrlIterationCount = new QSpinBox(groupBox_14);
        commonUrlIterationCount->setObjectName(QStringLiteral("commonUrlIterationCount"));
        commonUrlIterationCount->setMinimum(10000);
        commonUrlIterationCount->setMaximum(999999999);
        commonUrlIterationCount->setValue(250000);

        horizontalLayout_99->addWidget(commonUrlIterationCount);

        horizontalSpacer_80 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_99->addItem(horizontalSpacer_80);


        verticalLayout_67->addLayout(horizontalLayout_99);


        verticalLayout_65->addWidget(groupBox_14);

        groupBox_13 = new QGroupBox(scrollAreaWidgetContents_12);
        groupBox_13->setObjectName(QStringLiteral("groupBox_13"));
        sizePolicy13.setHeightForWidth(groupBox_13->sizePolicy().hasHeightForWidth());
        groupBox_13->setSizePolicy(sizePolicy13);
        groupBox_13->setStyleSheet(QLatin1String("QGroupBox::QLabel {\\n border: 1px solid gray;\\n background-color: lightgreen;\\n border-radius: 10px;\\n margin: 2px;\\n padding: 2px;\\n }\n"
""));
        verticalLayout_64 = new QVBoxLayout(groupBox_13);
        verticalLayout_64->setSpacing(5);
        verticalLayout_64->setObjectName(QStringLiteral("verticalLayout_64"));
        verticalLayout_64->setContentsMargins(5, 5, 5, 5);
        importCredentialsLabel = new QLabel(groupBox_13);
        importCredentialsLabel->setObjectName(QStringLiteral("importCredentialsLabel"));
        importCredentialsLabel->setFont(font2);

        verticalLayout_64->addWidget(importCredentialsLabel);

        label_118 = new QLabel(groupBox_13);
        label_118->setObjectName(QStringLiteral("label_118"));
        label_118->setWordWrap(true);

        verticalLayout_64->addWidget(label_118);

        horizontalLayout_90 = new QHBoxLayout();
        horizontalLayout_90->setSpacing(5);
        horizontalLayout_90->setObjectName(QStringLiteral("horizontalLayout_90"));
        label_107 = new QLabel(groupBox_13);
        label_107->setObjectName(QStringLiteral("label_107"));

        horizontalLayout_90->addWidget(label_107);

        urlIniPath = new QLineEdit(groupBox_13);
        urlIniPath->setObjectName(QStringLiteral("urlIniPath"));

        horizontalLayout_90->addWidget(urlIniPath);

        label_108 = new QLabel(groupBox_13);
        label_108->setObjectName(QStringLiteral("label_108"));
        sizePolicy9.setHeightForWidth(label_108->sizePolicy().hasHeightForWidth());
        label_108->setSizePolicy(sizePolicy9);
        label_108->setStyleSheet(QLatin1String("QLabel {\n"
" border: 1px solid gray;\n"
" background-color: lightgreen;\n"
" margin: 2px;\n"
" padding: 2px;\n"
" }"));

        horizontalLayout_90->addWidget(label_108);

        selectUrlIni = new QPushButton(groupBox_13);
        selectUrlIni->setObjectName(QStringLiteral("selectUrlIni"));
        sizePolicy11.setHeightForWidth(selectUrlIni->sizePolicy().hasHeightForWidth());
        selectUrlIni->setSizePolicy(sizePolicy11);
        selectUrlIni->setStyleSheet(QLatin1String("QPushButton {\n"
" border: 2px solid gray;\n"
" background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                   stop: 0 #E0E0E0, stop: 1 #FFFFFF);\n"
" border-radius: 5px;\n"
"\n"
" padding: 2px;\n"
" }\n"
"\n"
"\n"
"QPushButton:hover { \n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                   stop: 0 rgb(254,229,172), stop: 1 #FFFFFF);\n"
"background-position: top center; } \n"
"\n"
"QPushButton:pressed {\n"
"     background-color: darkgrey;\n"
"     border-style: inset;\n"
" }"));

        horizontalLayout_90->addWidget(selectUrlIni);

        reloadIni = new QPushButton(groupBox_13);
        reloadIni->setObjectName(QStringLiteral("reloadIni"));
        sizePolicy11.setHeightForWidth(reloadIni->sizePolicy().hasHeightForWidth());
        reloadIni->setSizePolicy(sizePolicy11);
        reloadIni->setStyleSheet(QLatin1String("QPushButton {\n"
" border: 2px solid gray;\n"
" background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                   stop: 0 #E0E0E0, stop: 1 #FFFFFF);\n"
" border-radius: 5px;\n"
"\n"
" padding: 2px;\n"
" }\n"
"\n"
"\n"
"QPushButton:hover { \n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                   stop: 0 rgb(254,229,172), stop: 1 #FFFFFF);\n"
"background-position: top center; } \n"
"\n"
"QPushButton:pressed {\n"
"     background-color: darkgrey;\n"
"     border-style: inset;\n"
" }"));

        horizontalLayout_90->addWidget(reloadIni);


        verticalLayout_64->addLayout(horizontalLayout_90);

        horizontalLayout_93 = new QHBoxLayout();
        horizontalLayout_93->setSpacing(5);
        horizontalLayout_93->setObjectName(QStringLiteral("horizontalLayout_93"));
        label_109 = new QLabel(groupBox_13);
        label_109->setObjectName(QStringLiteral("label_109"));

        horizontalLayout_93->addWidget(label_109);

        urlCipher = new QComboBox(groupBox_13);
        urlCipher->setObjectName(QStringLiteral("urlCipher"));
        urlCipher->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        horizontalLayout_93->addWidget(urlCipher);

        label_110 = new QLabel(groupBox_13);
        label_110->setObjectName(QStringLiteral("label_110"));

        horizontalLayout_93->addWidget(label_110);

        urlHash = new QComboBox(groupBox_13);
        urlHash->setObjectName(QStringLiteral("urlHash"));
        urlHash->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        horizontalLayout_93->addWidget(urlHash);

        label_111 = new QLabel(groupBox_13);
        label_111->setObjectName(QStringLiteral("label_111"));

        horizontalLayout_93->addWidget(label_111);

        urlIteration = new QSpinBox(groupBox_13);
        urlIteration->setObjectName(QStringLiteral("urlIteration"));
        urlIteration->setMinimum(10000);
        urlIteration->setMaximum(999999999);
        urlIteration->setValue(10000);

        horizontalLayout_93->addWidget(urlIteration);

        horizontalSpacer_75 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_93->addItem(horizontalSpacer_75);


        verticalLayout_64->addLayout(horizontalLayout_93);

        horizontalLayout_92 = new QHBoxLayout();
        horizontalLayout_92->setSpacing(5);
        horizontalLayout_92->setObjectName(QStringLiteral("horizontalLayout_92"));
        label_113 = new QLabel(groupBox_13);
        label_113->setObjectName(QStringLiteral("label_113"));

        horizontalLayout_92->addWidget(label_113);

        urlPassphrase = new QLineEdit(groupBox_13);
        urlPassphrase->setObjectName(QStringLiteral("urlPassphrase"));
        urlPassphrase->setEchoMode(QLineEdit::Password);

        horizontalLayout_92->addWidget(urlPassphrase);


        verticalLayout_64->addLayout(horizontalLayout_92);

        horizontalLayout_88 = new QHBoxLayout();
        horizontalLayout_88->setSpacing(5);
        horizontalLayout_88->setObjectName(QStringLiteral("horizontalLayout_88"));
        label_116 = new QLabel(groupBox_13);
        label_116->setObjectName(QStringLiteral("label_116"));

        horizontalLayout_88->addWidget(label_116);

        urlIniHash = new QLineEdit(groupBox_13);
        urlIniHash->setObjectName(QStringLiteral("urlIniHash"));

        horizontalLayout_88->addWidget(urlIniHash);

        label_112 = new QLabel(groupBox_13);
        label_112->setObjectName(QStringLiteral("label_112"));

        horizontalLayout_88->addWidget(label_112);

        urlSalt = new QLineEdit(groupBox_13);
        urlSalt->setObjectName(QStringLiteral("urlSalt"));

        horizontalLayout_88->addWidget(urlSalt);


        verticalLayout_64->addLayout(horizontalLayout_88);

        urls_import_layout = new QHBoxLayout();
        urls_import_layout->setSpacing(5);
        urls_import_layout->setObjectName(QStringLiteral("urls_import_layout"));
        horizontalSpacer_74 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        urls_import_layout->addItem(horizontalSpacer_74);

        label_114 = new QLabel(groupBox_13);
        label_114->setObjectName(QStringLiteral("label_114"));
        sizePolicy9.setHeightForWidth(label_114->sizePolicy().hasHeightForWidth());
        label_114->setSizePolicy(sizePolicy9);
        label_114->setStyleSheet(QLatin1String("QLabel {\n"
" border: 1px solid gray;\n"
" background-color: lightgreen;\n"
" margin: 2px;\n"
" padding: 2px;\n"
" }"));

        urls_import_layout->addWidget(label_114);

        verify = new QPushButton(groupBox_13);
        verify->setObjectName(QStringLiteral("verify"));
        sizePolicy11.setHeightForWidth(verify->sizePolicy().hasHeightForWidth());
        verify->setSizePolicy(sizePolicy11);
        verify->setStyleSheet(QLatin1String("QPushButton {\n"
" border: 2px solid gray;\n"
" background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                   stop: 0 #E0E0E0, stop: 1 #FFFFFF);\n"
" border-radius: 5px;\n"
"\n"
" padding: 2px;\n"
" }\n"
"\n"
"\n"
"QPushButton:hover { \n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                   stop: 0 rgb(254,229,172), stop: 1 #FFFFFF);\n"
"background-position: top center; } \n"
"\n"
"QPushButton:pressed {\n"
"     background-color: darkgrey;\n"
"     border-style: inset;\n"
" }"));

        urls_import_layout->addWidget(verify);

        label_115 = new QLabel(groupBox_13);
        label_115->setObjectName(QStringLiteral("label_115"));
        sizePolicy9.setHeightForWidth(label_115->sizePolicy().hasHeightForWidth());
        label_115->setSizePolicy(sizePolicy9);
        label_115->setStyleSheet(QLatin1String("QLabel {\n"
" border: 1px solid gray;\n"
" background-color: lightgreen;\n"
" margin: 2px;\n"
" padding: 2px;\n"
" }"));

        urls_import_layout->addWidget(label_115);

        saveUrlCredentials = new QPushButton(groupBox_13);
        saveUrlCredentials->setObjectName(QStringLiteral("saveUrlCredentials"));
        sizePolicy11.setHeightForWidth(saveUrlCredentials->sizePolicy().hasHeightForWidth());
        saveUrlCredentials->setSizePolicy(sizePolicy11);
        saveUrlCredentials->setStyleSheet(QLatin1String("QPushButton {\n"
" border: 2px solid gray;\n"
" background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                   stop: 0 #E0E0E0, stop: 1 #FFFFFF);\n"
" border-radius: 5px;\n"
"\n"
" padding: 2px;\n"
" }\n"
"\n"
"\n"
"QPushButton:hover { \n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                   stop: 0 rgb(254,229,172), stop: 1 #FFFFFF);\n"
"background-position: top center; } \n"
"\n"
"QPushButton:pressed {\n"
"     background-color: darkgrey;\n"
"     border-style: inset;\n"
" }"));

        urls_import_layout->addWidget(saveUrlCredentials);

        label_106 = new QLabel(groupBox_13);
        label_106->setObjectName(QStringLiteral("label_106"));
        sizePolicy9.setHeightForWidth(label_106->sizePolicy().hasHeightForWidth());
        label_106->setSizePolicy(sizePolicy9);
        label_106->setStyleSheet(QLatin1String("QLabel {\n"
" border: 1px solid gray;\n"
" background-color: lightgreen;\n"
" margin: 2px;\n"
" padding: 2px;\n"
" }"));

        urls_import_layout->addWidget(label_106);

        importUrls = new QPushButton(groupBox_13);
        importUrls->setObjectName(QStringLiteral("importUrls"));
        importUrls->setStyleSheet(QLatin1String("QPushButton {\n"
" border: 2px solid gray;\n"
" background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                   stop: 0 #E0E0E0, stop: 1 #FFFFFF);\n"
" border-radius: 5px;\n"
"\n"
" padding: 2px;\n"
" }\n"
"\n"
"\n"
"QPushButton:hover { \n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                   stop: 0 rgb(254,229,172), stop: 1 #FFFFFF);\n"
"background-position: top center; } \n"
"\n"
"QPushButton:pressed {\n"
"     background-color: darkgrey;\n"
"     border-style: inset;\n"
" }"));

        urls_import_layout->addWidget(importUrls);


        verticalLayout_64->addLayout(urls_import_layout);


        verticalLayout_65->addWidget(groupBox_13);

        urlSettings->setWidget(scrollAreaWidgetContents_12);

        verticalLayout_2->addWidget(urlSettings);

        urlsBox = new QGroupBox(scrollAreaWidgetContents_9);
        urlsBox->setObjectName(QStringLiteral("urlsBox"));
        verticalLayout_68 = new QVBoxLayout(urlsBox);
        verticalLayout_68->setSpacing(5);
        verticalLayout_68->setObjectName(QStringLiteral("verticalLayout_68"));
        verticalLayout_68->setContentsMargins(5, 5, 5, 5);
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(5);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_4);

        search = new QLineEdit(urlsBox);
        search->setObjectName(QStringLiteral("search"));
        search->setMinimumSize(QSize(500, 0));

        horizontalLayout_7->addWidget(search);

        discover = new QPushButton(urlsBox);
        discover->setObjectName(QStringLiteral("discover"));
        discover->setStyleSheet(QLatin1String("QPushButton {\n"
" border: 2px solid gray;\n"
" background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                   stop: 0 #E0E0E0, stop: 1 #FFFFFF);\n"
" border-radius: 5px;\n"
"\n"
" padding: 2px;\n"
" }\n"
"\n"
"\n"
"QPushButton:hover { \n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                   stop: 0 rgb(254,229,172), stop: 1 #FFFFFF);\n"
"background-position: top center; } \n"
"\n"
"QPushButton:pressed {\n"
"     background-color: darkgrey;\n"
"     border-style: inset;\n"
" }"));
        QIcon icon32;
        icon32.addFile(QStringLiteral(":/nuvola/search.png"), QSize(), QIcon::Normal, QIcon::Off);
        discover->setIcon(icon32);

        horizontalLayout_7->addWidget(discover);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_5);


        verticalLayout_68->addLayout(horizontalLayout_7);

        searchfor = new QTextBrowser(urlsBox);
        searchfor->setObjectName(QStringLiteral("searchfor"));
        sizePolicy1.setHeightForWidth(searchfor->sizePolicy().hasHeightForWidth());
        searchfor->setSizePolicy(sizePolicy1);
        searchfor->setMaximumSize(QSize(16777215, 50));
        searchfor->setFont(font1);
        searchfor->setTabChangesFocus(true);
        searchfor->setTextInteractionFlags(Qt::LinksAccessibleByKeyboard|Qt::LinksAccessibleByMouse|Qt::TextBrowserInteraction|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);
        searchfor->setOpenLinks(false);

        verticalLayout_68->addWidget(searchfor);

        urls = new spoton_textbrowser(urlsBox);
        urls->setObjectName(QStringLiteral("urls"));
        urls->setFont(font1);
        urls->setTabChangesFocus(true);
        urls->setTextInteractionFlags(Qt::LinksAccessibleByKeyboard|Qt::LinksAccessibleByMouse|Qt::TextBrowserInteraction|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);
        urls->setOpenLinks(false);

        verticalLayout_68->addWidget(urls);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setSpacing(5);
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_16->addItem(horizontalSpacer_12);

        url_pages = new QLabel(urlsBox);
        url_pages->setObjectName(QStringLiteral("url_pages"));
        url_pages->setFont(font1);
        url_pages->setAlignment(Qt::AlignCenter);

        horizontalLayout_16->addWidget(url_pages);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_16->addItem(horizontalSpacer_13);


        verticalLayout_68->addLayout(horizontalLayout_16);


        verticalLayout_2->addWidget(urlsBox);

        scrollArea_9->setWidget(scrollAreaWidgetContents_9);

        verticalLayout->addWidget(scrollArea_9);

        tab->addTab(tab_search, QString());
        tab_settings = new QWidget();
        tab_settings->setObjectName(QStringLiteral("tab_settings"));
        verticalLayout_15 = new QVBoxLayout(tab_settings);
        verticalLayout_15->setSpacing(5);
        verticalLayout_15->setObjectName(QStringLiteral("verticalLayout_15"));
        verticalLayout_15->setContentsMargins(5, 5, 5, 5);
        label_96 = new QLabel(tab_settings);
        label_96->setObjectName(QStringLiteral("label_96"));
        label_96->setMinimumSize(QSize(0, 40));
        label_96->setFont(font);
        label_96->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:reflect, x1:0.023, y1:0.988636, x2:0.028, y2:0.011, stop:0 rgba(218, 232, 255, 255), stop:1 rgba(170, 85, 255, 255));\n"
"color: rgb(255, 255, 255);"));
        label_96->setIndent(5);

        verticalLayout_15->addWidget(label_96);

        line_9 = new QFrame(tab_settings);
        line_9->setObjectName(QStringLiteral("line_9"));
        line_9->setFrameShape(QFrame::HLine);
        line_9->setFrameShadow(QFrame::Sunken);

        verticalLayout_15->addWidget(line_9);

        scrollArea = new QScrollArea(tab_settings);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 813, 1185));
        verticalLayout_35 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_35->setSpacing(5);
        verticalLayout_35->setObjectName(QStringLiteral("verticalLayout_35"));
        verticalLayout_35->setContentsMargins(5, 5, 5, 5);
        settings_frame = new QFrame(scrollAreaWidgetContents);
        settings_frame->setObjectName(QStringLiteral("settings_frame"));
        verticalLayout_12 = new QVBoxLayout(settings_frame);
        verticalLayout_12->setSpacing(5);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        verticalLayout_12->setContentsMargins(5, 5, 5, 5);
        label_29 = new QLabel(settings_frame);
        label_29->setObjectName(QStringLiteral("label_29"));

        verticalLayout_12->addWidget(label_29);

        horizontalLayout_65 = new QHBoxLayout();
        horizontalLayout_65->setSpacing(5);
        horizontalLayout_65->setObjectName(QStringLiteral("horizontalLayout_65"));
        guiExternalIpFetch = new QComboBox(settings_frame);
        guiExternalIpFetch->setObjectName(QStringLiteral("guiExternalIpFetch"));
        guiExternalIpFetch->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        horizontalLayout_65->addWidget(guiExternalIpFetch);

        label_60 = new QLabel(settings_frame);
        label_60->setObjectName(QStringLiteral("label_60"));

        horizontalLayout_65->addWidget(label_60);

        guiSecureMemoryPool = new QSpinBox(settings_frame);
        guiSecureMemoryPool->setObjectName(QStringLiteral("guiSecureMemoryPool"));
        guiSecureMemoryPool->setMinimum(0);
        guiSecureMemoryPool->setMaximum(999999999);
        guiSecureMemoryPool->setValue(0);

        horizontalLayout_65->addWidget(guiSecureMemoryPool);

        horizontalSpacer_52 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_65->addItem(horizontalSpacer_52);


        verticalLayout_12->addLayout(horizontalLayout_65);

        horizontalLayout_46 = new QHBoxLayout();
        horizontalLayout_46->setSpacing(5);
        horizontalLayout_46->setObjectName(QStringLiteral("horizontalLayout_46"));
        label_40 = new QLabel(settings_frame);
        label_40->setObjectName(QStringLiteral("label_40"));

        horizontalLayout_46->addWidget(label_40);

        geoipPath4 = new QLineEdit(settings_frame);
        geoipPath4->setObjectName(QStringLiteral("geoipPath4"));

        horizontalLayout_46->addWidget(geoipPath4);

        selectGeoIP4 = new QPushButton(settings_frame);
        selectGeoIP4->setObjectName(QStringLiteral("selectGeoIP4"));

        horizontalLayout_46->addWidget(selectGeoIP4);


        verticalLayout_12->addLayout(horizontalLayout_46);

        horizontalLayout_78 = new QHBoxLayout();
        horizontalLayout_78->setSpacing(5);
        horizontalLayout_78->setObjectName(QStringLiteral("horizontalLayout_78"));
        label_81 = new QLabel(settings_frame);
        label_81->setObjectName(QStringLiteral("label_81"));

        horizontalLayout_78->addWidget(label_81);

        geoipPath6 = new QLineEdit(settings_frame);
        geoipPath6->setObjectName(QStringLiteral("geoipPath6"));

        horizontalLayout_78->addWidget(geoipPath6);

        selectGeoIP6 = new QPushButton(settings_frame);
        selectGeoIP6->setObjectName(QStringLiteral("selectGeoIP6"));

        horizontalLayout_78->addWidget(selectGeoIP6);


        verticalLayout_12->addLayout(horizontalLayout_78);

        horizontalLayout_50 = new QHBoxLayout();
        horizontalLayout_50->setSpacing(5);
        horizontalLayout_50->setObjectName(QStringLiteral("horizontalLayout_50"));
        label_43 = new QLabel(settings_frame);
        label_43->setObjectName(QStringLiteral("label_43"));

        horizontalLayout_50->addWidget(label_43);

        sslControlString = new QLineEdit(settings_frame);
        sslControlString->setObjectName(QStringLiteral("sslControlString"));

        horizontalLayout_50->addWidget(sslControlString);

        saveSslControlString = new QPushButton(settings_frame);
        saveSslControlString->setObjectName(QStringLiteral("saveSslControlString"));

        horizontalLayout_50->addWidget(saveSslControlString);

        testSslControlString = new QPushButton(settings_frame);
        testSslControlString->setObjectName(QStringLiteral("testSslControlString"));

        horizontalLayout_50->addWidget(testSslControlString);


        verticalLayout_12->addLayout(horizontalLayout_50);


        verticalLayout_35->addWidget(settings_frame);

        settingsVerticalLayout = new QVBoxLayout();
        settingsVerticalLayout->setSpacing(5);
        settingsVerticalLayout->setObjectName(QStringLiteral("settingsVerticalLayout"));
        kernelBox = new QGroupBox(scrollAreaWidgetContents);
        kernelBox->setObjectName(QStringLiteral("kernelBox"));
        kernelBox->setStyleSheet(QStringLiteral(""));
        verticalLayout_28 = new QVBoxLayout(kernelBox);
        verticalLayout_28->setSpacing(5);
        verticalLayout_28->setObjectName(QStringLiteral("verticalLayout_28"));
        verticalLayout_28->setContentsMargins(5, 5, 5, 5);
        horizontalLayout_66 = new QHBoxLayout();
        horizontalLayout_66->setSpacing(5);
        horizontalLayout_66->setObjectName(QStringLiteral("horizontalLayout_66"));
        label_67 = new QLabel(kernelBox);
        label_67->setObjectName(QStringLiteral("label_67"));

        horizontalLayout_66->addWidget(label_67);

        kernelExternalIpFetch = new QComboBox(kernelBox);
        kernelExternalIpFetch->setObjectName(QStringLiteral("kernelExternalIpFetch"));
        kernelExternalIpFetch->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        horizontalLayout_66->addWidget(kernelExternalIpFetch);

        label_68 = new QLabel(kernelBox);
        label_68->setObjectName(QStringLiteral("label_68"));

        horizontalLayout_66->addWidget(label_68);

        kernelSecureMemoryPool = new QSpinBox(kernelBox);
        kernelSecureMemoryPool->setObjectName(QStringLiteral("kernelSecureMemoryPool"));
        kernelSecureMemoryPool->setMinimum(0);
        kernelSecureMemoryPool->setMaximum(999999999);
        kernelSecureMemoryPool->setValue(262144);

        horizontalLayout_66->addWidget(kernelSecureMemoryPool);


        verticalLayout_28->addLayout(horizontalLayout_66);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setObjectName(QStringLiteral("horizontalLayout_20"));
        horizontalLayout_20->setContentsMargins(-1, 0, -1, -1);
        kernelPathLabel = new QLabel(kernelBox);
        kernelPathLabel->setObjectName(QStringLiteral("kernelPathLabel"));

        horizontalLayout_20->addWidget(kernelPathLabel);

        horizontalSpacer_67 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_20->addItem(horizontalSpacer_67);

        horizontalSpacer_53 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_20->addItem(horizontalSpacer_53);

        horizontalSpacer_26 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_20->addItem(horizontalSpacer_26);

        horizontalSpacer_30 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_20->addItem(horizontalSpacer_30);

        horizontalSpacer_42 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_20->addItem(horizontalSpacer_42);


        verticalLayout_28->addLayout(horizontalLayout_20);

        horizontalLayout_58 = new QHBoxLayout();
        horizontalLayout_58->setSpacing(5);
        horizontalLayout_58->setObjectName(QStringLiteral("horizontalLayout_58"));
        kernelPath = new QLineEdit(kernelBox);
        kernelPath->setObjectName(QStringLiteral("kernelPath"));

        horizontalLayout_58->addWidget(kernelPath);

        selectKernelPath = new QPushButton(kernelBox);
        selectKernelPath->setObjectName(QStringLiteral("selectKernelPath"));
        selectKernelPath->setStyleSheet(QLatin1String("QPushButton {\n"
" border: 2px solid gray;\n"
" background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                   stop: 0 #E0E0E0, stop: 1 #FFFFFF);\n"
" border-radius: 5px;\n"
" margin: 2px;\n"
" padding: 2px;\n"
" }\n"
"\n"
"\n"
"\n"
"\n"
"QPushButton:hover { \n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                   stop: 0 rgb(254,229,172), stop: 1 #FFFFFF);\n"
"background-position: top center; } \n"
"\n"
"\n"
"\n"
"QPushButton:pressed {\n"
"     background-color: darkgrey;\n"
"     border-style: inset;\n"
" }\n"
""));
        selectKernelPath->setIcon(icon3);

        horizontalLayout_58->addWidget(selectKernelPath);


        verticalLayout_28->addLayout(horizontalLayout_58);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setSpacing(5);
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        activateKernel = new QPushButton(kernelBox);
        activateKernel->setObjectName(QStringLiteral("activateKernel"));
        sizePolicy1.setHeightForWidth(activateKernel->sizePolicy().hasHeightForWidth());
        activateKernel->setSizePolicy(sizePolicy1);
        activateKernel->setStyleSheet(QLatin1String("QPushButton#activateKernel {\n"
"     background-color: #FF717E;\n"
"     color: white;\n"
"     border-style: outset;\n"
"     border-width: 2px;\n"
"     border-radius: 10px;\n"
"     border-color: black;\n"
"     min-width: 5em;\n"
"     padding: 6px;\n"
" }\n"
"\n"
"\n"
"QPushButton#activateKernel:pressed {\n"
"     background-color: darkgrey;\n"
"     border-style: inset;\n"
" }\n"
"\n"
"QPushButton#activateKernel:hover {\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                   stop: 0 rgb(254,229,172), stop: 1 #FFFFFF);\n"
"background-position: top center; \n"
" }\n"
"\n"
"\n"
""));
        QIcon icon33;
        icon33.addFile(QStringLiteral(":/nuvola/activate.png"), QSize(), QIcon::Normal, QIcon::Off);
        activateKernel->setIcon(icon33);
        activateKernel->setIconSize(QSize(40, 40));

        horizontalLayout_15->addWidget(activateKernel);

        label_17 = new QLabel(kernelBox);
        label_17->setObjectName(QStringLiteral("label_17"));
        sizePolicy10.setHeightForWidth(label_17->sizePolicy().hasHeightForWidth());
        label_17->setSizePolicy(sizePolicy10);

        horizontalLayout_15->addWidget(label_17);

        pid = new QLineEdit(kernelBox);
        pid->setObjectName(QStringLiteral("pid"));
        pid->setReadOnly(true);

        horizontalLayout_15->addWidget(pid);

        deactivateKernel = new QPushButton(kernelBox);
        deactivateKernel->setObjectName(QStringLiteral("deactivateKernel"));
        deactivateKernel->setStyleSheet(QLatin1String("QPushButton {\n"
" border: 2px solid gray;\n"
" background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                   stop: 0 #E0E0E0, stop: 1 #FFFFFF);\n"
" border-radius: 5px;\n"
" margin: 2px;\n"
" padding: 2px;\n"
" }\n"
"\n"
"\n"
"\n"
"QPushButton:hover { \n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                   stop: 0 rgb(254,229,172), stop: 1 #FFFFFF);\n"
"background-position: top center; \n"
"} \n"
"\n"
"QPushButton:pressed {\n"
"     background-color: darkgrey;\n"
"     border-style: inset;\n"
" }\n"
"\n"
"\n"
""));
        QIcon icon34;
        icon34.addFile(QStringLiteral(":/nuvola/deactivate.png"), QSize(), QIcon::Normal, QIcon::Off);
        deactivateKernel->setIcon(icon34);
        deactivateKernel->setIconSize(QSize(40, 40));

        horizontalLayout_15->addWidget(deactivateKernel);


        verticalLayout_28->addLayout(horizontalLayout_15);

        horizontalLayout_83 = new QHBoxLayout();
        horizontalLayout_83->setSpacing(5);
        horizontalLayout_83->setObjectName(QStringLiteral("horizontalLayout_83"));
        label_42 = new QLabel(kernelBox);
        label_42->setObjectName(QStringLiteral("label_42"));

        horizontalLayout_83->addWidget(label_42);

        kernelCipherType = new QComboBox(kernelBox);
        kernelCipherType->setObjectName(QStringLiteral("kernelCipherType"));
        kernelCipherType->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        horizontalLayout_83->addWidget(kernelCipherType);

        label_87 = new QLabel(kernelBox);
        label_87->setObjectName(QStringLiteral("label_87"));

        horizontalLayout_83->addWidget(label_87);

        kernelHashType = new QComboBox(kernelBox);
        kernelHashType->setObjectName(QStringLiteral("kernelHashType"));
        kernelHashType->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        horizontalLayout_83->addWidget(kernelHashType);


        verticalLayout_28->addLayout(horizontalLayout_83);

        horizontalLayout_23 = new QHBoxLayout();
        horizontalLayout_23->setSpacing(5);
        horizontalLayout_23->setObjectName(QStringLiteral("horizontalLayout_23"));
        label_73 = new QLabel(kernelBox);
        label_73->setObjectName(QStringLiteral("label_73"));

        horizontalLayout_23->addWidget(label_73);

        cost = new QSpinBox(kernelBox);
        cost->setObjectName(QStringLiteral("cost"));
        cost->setMinimum(1000);
        cost->setMaximum(65536);
        cost->setValue(10000);

        horizontalLayout_23->addWidget(cost);

        label_124 = new QLabel(kernelBox);
        label_124->setObjectName(QStringLiteral("label_124"));

        horizontalLayout_23->addWidget(label_124);

        congestionAlgorithm = new QComboBox(kernelBox);
        congestionAlgorithm->setObjectName(QStringLiteral("congestionAlgorithm"));
        congestionAlgorithm->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        horizontalLayout_23->addWidget(congestionAlgorithm);

        secondary_storage = new QCheckBox(kernelBox);
        secondary_storage->setObjectName(QStringLiteral("secondary_storage"));

        horizontalLayout_23->addWidget(secondary_storage);

        kernelLogEvents = new QCheckBox(kernelBox);
        kernelLogEvents->setObjectName(QStringLiteral("kernelLogEvents"));
        sizePolicy6.setHeightForWidth(kernelLogEvents->sizePolicy().hasHeightForWidth());
        kernelLogEvents->setSizePolicy(sizePolicy6);

        horizontalLayout_23->addWidget(kernelLogEvents);

        label_34 = new QLabel(kernelBox);
        label_34->setObjectName(QStringLiteral("label_34"));

        horizontalLayout_23->addWidget(label_34);

        kernelKeySize = new QComboBox(kernelBox);
        kernelKeySize->setObjectName(QStringLiteral("kernelKeySize"));
        kernelKeySize->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        horizontalLayout_23->addWidget(kernelKeySize);


        verticalLayout_28->addLayout(horizontalLayout_23);


        settingsVerticalLayout->addWidget(kernelBox);

        passphraseGroupBox = new QGroupBox(scrollAreaWidgetContents);
        passphraseGroupBox->setObjectName(QStringLiteral("passphraseGroupBox"));
        passphraseGroupBox->setStyleSheet(QLatin1String("QGroupBox { \n"
"background-color:\n"
"qlineargradient(spread:pad, \n"
"x1:0, y1:1, \n"
"x2:1, y2:0, \n"
"stop:0.05 rgba(218, 232, 255, 255), \n"
"stop:1 rgba(170, 85, 255, 255));\n"
"color: rgb(255, 255, 255);\n"
"\n"
"border-style: outset;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"border-color: white;\n"
"padding: 15px;\n"
"}\n"
"\n"
"QGroupBox::title\n"
"{\n"
"left: 5px;\n"
"top: 5px;\n"
"}"));
        verticalLayout_16 = new QVBoxLayout(passphraseGroupBox);
        verticalLayout_16->setSpacing(5);
        verticalLayout_16->setObjectName(QStringLiteral("verticalLayout_16"));
        verticalLayout_16->setContentsMargins(5, 5, 5, 5);
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(5);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        passphrase2 = new spoton_lineedit(passphraseGroupBox);
        passphrase2->setObjectName(QStringLiteral("passphrase2"));
        passphrase2->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(passphrase2, 6, 4, 1, 1);

        question_rb = new QRadioButton(passphraseGroupBox);
        question_rb->setObjectName(QStringLiteral("question_rb"));

        gridLayout->addWidget(question_rb, 8, 0, 1, 2);

        question = new spoton_lineedit(passphraseGroupBox);
        question->setObjectName(QStringLiteral("question"));

        gridLayout->addWidget(question, 9, 4, 1, 1);

        answer = new spoton_lineedit(passphraseGroupBox);
        answer->setObjectName(QStringLiteral("answer"));

        gridLayout->addWidget(answer, 10, 4, 1, 1);

        label_58 = new QLabel(passphraseGroupBox);
        label_58->setObjectName(QStringLiteral("label_58"));

        gridLayout->addWidget(label_58, 3, 4, 1, 1);

        passphrase_rb = new QRadioButton(passphraseGroupBox);
        passphrase_rb->setObjectName(QStringLiteral("passphrase_rb"));
        sizePolicy6.setHeightForWidth(passphrase_rb->sizePolicy().hasHeightForWidth());
        passphrase_rb->setSizePolicy(sizePolicy6);
        passphrase_rb->setChecked(true);

        gridLayout->addWidget(passphrase_rb, 3, 0, 1, 2);

        label_74 = new QLabel(passphraseGroupBox);
        label_74->setObjectName(QStringLiteral("label_74"));

        gridLayout->addWidget(label_74, 1, 0, 1, 2);

        username = new QLineEdit(passphraseGroupBox);
        username->setObjectName(QStringLiteral("username"));

        gridLayout->addWidget(username, 1, 2, 1, 3);

        label_18 = new QLabel(passphraseGroupBox);
        label_18->setObjectName(QStringLiteral("label_18"));

        gridLayout->addWidget(label_18, 2, 0, 1, 1);

        label_55 = new QLabel(passphraseGroupBox);
        label_55->setObjectName(QStringLiteral("label_55"));

        gridLayout->addWidget(label_55, 4, 1, 1, 2);

        label_56 = new QLabel(passphraseGroupBox);
        label_56->setObjectName(QStringLiteral("label_56"));

        gridLayout->addWidget(label_56, 6, 1, 1, 2);

        label_97 = new QLabel(passphraseGroupBox);
        label_97->setObjectName(QStringLiteral("label_97"));

        gridLayout->addWidget(label_97, 9, 1, 1, 2);

        label_98 = new QLabel(passphraseGroupBox);
        label_98->setObjectName(QStringLiteral("label_98"));

        gridLayout->addWidget(label_98, 10, 1, 1, 2);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setSpacing(5);
        horizontalLayout_18->setObjectName(QStringLiteral("horizontalLayout_18"));
        label = new QLabel(passphraseGroupBox);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_18->addWidget(label);

        cipherType = new QComboBox(passphraseGroupBox);
        cipherType->setObjectName(QStringLiteral("cipherType"));
        cipherType->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        horizontalLayout_18->addWidget(cipherType);

        label_14 = new QLabel(passphraseGroupBox);
        label_14->setObjectName(QStringLiteral("label_14"));

        horizontalLayout_18->addWidget(label_14);

        hashType = new QComboBox(passphraseGroupBox);
        hashType->setObjectName(QStringLiteral("hashType"));
        hashType->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        horizontalLayout_18->addWidget(hashType);

        label_15 = new QLabel(passphraseGroupBox);
        label_15->setObjectName(QStringLiteral("label_15"));

        horizontalLayout_18->addWidget(label_15);

        iterationCount = new QSpinBox(passphraseGroupBox);
        iterationCount->setObjectName(QStringLiteral("iterationCount"));
        iterationCount->setMinimum(10000);
        iterationCount->setMaximum(999999999);
        iterationCount->setValue(10000);

        horizontalLayout_18->addWidget(iterationCount);

        label_16 = new QLabel(passphraseGroupBox);
        label_16->setObjectName(QStringLiteral("label_16"));

        horizontalLayout_18->addWidget(label_16);

        saltLength = new QSpinBox(passphraseGroupBox);
        saltLength->setObjectName(QStringLiteral("saltLength"));
        saltLength->setMinimum(512);
        saltLength->setMaximum(999999999);

        horizontalLayout_18->addWidget(saltLength);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_18->addItem(horizontalSpacer_11);


        gridLayout->addLayout(horizontalLayout_18, 2, 1, 1, 4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(5);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        passphrase1 = new spoton_lineedit(passphraseGroupBox);
        passphrase1->setObjectName(QStringLiteral("passphrase1"));
        passphrase1->setEchoMode(QLineEdit::Password);

        horizontalLayout_3->addWidget(passphrase1);

        passphrase_strength_indicator = new QProgressBar(passphraseGroupBox);
        passphrase_strength_indicator->setObjectName(QStringLiteral("passphrase_strength_indicator"));
        passphrase_strength_indicator->setMaximumSize(QSize(100, 16777215));
        passphrase_strength_indicator->setValue(0);
        passphrase_strength_indicator->setTextVisible(false);

        horizontalLayout_3->addWidget(passphrase_strength_indicator);


        gridLayout->addLayout(horizontalLayout_3, 4, 4, 1, 1);


        verticalLayout_16->addLayout(gridLayout);

        setPassphrase = new QPushButton(passphraseGroupBox);
        setPassphrase->setObjectName(QStringLiteral("setPassphrase"));
        setPassphrase->setStyleSheet(QLatin1String("QPushButton {\n"
" border: 2px solid gray;\n"
" background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                   stop: 0 #E0E0E0, stop: 1 #FFFFFF);\n"
" border-radius: 5px;\n"
" margin: 2px;\n"
" padding: 2px;\n"
" }\n"
"\n"
"\n"
"QPushButton:hover { \n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                   stop: 0 rgb(254,229,172), stop: 1 #FFFFFF);\n"
"background-position: top center; } \n"
"\n"
"\n"
"QPushButton:pressed {\n"
"     background-color: darkgrey;\n"
"     border-style: inset;\n"
" }\n"
""));
        setPassphrase->setIcon(icon3);
        setPassphrase->setIconSize(QSize(40, 40));

        verticalLayout_16->addWidget(setPassphrase);


        settingsVerticalLayout->addWidget(passphraseGroupBox);

        publicKeysBox = new QGroupBox(scrollAreaWidgetContents);
        publicKeysBox->setObjectName(QStringLiteral("publicKeysBox"));
        verticalLayout_49 = new QVBoxLayout(publicKeysBox);
        verticalLayout_49->setSpacing(5);
        verticalLayout_49->setObjectName(QStringLiteral("verticalLayout_49"));
        verticalLayout_49->setContentsMargins(5, 5, 5, 5);
        personal_public_keys = new QTableWidget(publicKeysBox);
        if (personal_public_keys->columnCount() < 5)
            personal_public_keys->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem103 = new QTableWidgetItem();
        personal_public_keys->setHorizontalHeaderItem(0, __qtablewidgetitem103);
        QTableWidgetItem *__qtablewidgetitem104 = new QTableWidgetItem();
        personal_public_keys->setHorizontalHeaderItem(1, __qtablewidgetitem104);
        QTableWidgetItem *__qtablewidgetitem105 = new QTableWidgetItem();
        personal_public_keys->setHorizontalHeaderItem(2, __qtablewidgetitem105);
        QTableWidgetItem *__qtablewidgetitem106 = new QTableWidgetItem();
        personal_public_keys->setHorizontalHeaderItem(3, __qtablewidgetitem106);
        QTableWidgetItem *__qtablewidgetitem107 = new QTableWidgetItem();
        personal_public_keys->setHorizontalHeaderItem(4, __qtablewidgetitem107);
        personal_public_keys->setObjectName(QStringLiteral("personal_public_keys"));
        personal_public_keys->setMinimumSize(QSize(0, 150));
        personal_public_keys->setSelectionMode(QAbstractItemView::SingleSelection);
        personal_public_keys->setSelectionBehavior(QAbstractItemView::SelectRows);
        personal_public_keys->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        personal_public_keys->horizontalHeader()->setDefaultSectionSize(150);
        personal_public_keys->horizontalHeader()->setStretchLastSection(true);

        verticalLayout_49->addWidget(personal_public_keys);

        gridLayout_10 = new QGridLayout();
        gridLayout_10->setSpacing(5);
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        label_92 = new QLabel(publicKeysBox);
        label_92->setObjectName(QStringLiteral("label_92"));

        gridLayout_10->addWidget(label_92, 1, 0, 1, 1);

        encryptionKeySize = new QComboBox(publicKeysBox);
        encryptionKeySize->setObjectName(QStringLiteral("encryptionKeySize"));
        encryptionKeySize->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        gridLayout_10->addWidget(encryptionKeySize, 0, 1, 1, 1);

        signatureKeyType = new QComboBox(publicKeysBox);
        signatureKeyType->setObjectName(QStringLiteral("signatureKeyType"));
        signatureKeyType->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        gridLayout_10->addWidget(signatureKeyType, 1, 3, 1, 1);

        signatureKeySize = new QComboBox(publicKeysBox);
        signatureKeySize->setObjectName(QStringLiteral("signatureKeySize"));
        signatureKeySize->setSizeAdjustPolicy(QComboBox::AdjustToContents);
        signatureKeySize->setMinimumContentsLength(10);

        gridLayout_10->addWidget(signatureKeySize, 1, 1, 1, 1);

        label_46 = new QLabel(publicKeysBox);
        label_46->setObjectName(QStringLiteral("label_46"));

        gridLayout_10->addWidget(label_46, 1, 2, 1, 1);

        keys = new QComboBox(publicKeysBox);
        keys->insertItems(0, QStringList()
         << QStringLiteral("Chat")
         << QStringLiteral("E-Mail")
         << QStringLiteral("Open Library")
         << QStringLiteral("Poptastic")
         << QStringLiteral("Rosetta")
         << QStringLiteral("URL")
        );
        keys->setObjectName(QStringLiteral("keys"));
        keys->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        gridLayout_10->addWidget(keys, 1, 10, 1, 1);

        label_69 = new QLabel(publicKeysBox);
        label_69->setObjectName(QStringLiteral("label_69"));

        gridLayout_10->addWidget(label_69, 1, 9, 1, 1);

        encryptionKeyType = new QComboBox(publicKeysBox);
        encryptionKeyType->setObjectName(QStringLiteral("encryptionKeyType"));
        encryptionKeyType->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        gridLayout_10->addWidget(encryptionKeyType, 0, 3, 1, 1);

        label_45 = new QLabel(publicKeysBox);
        label_45->setObjectName(QStringLiteral("label_45"));

        gridLayout_10->addWidget(label_45, 0, 2, 1, 1);

        regenerate = new QPushButton(publicKeysBox);
        regenerate->setObjectName(QStringLiteral("regenerate"));

        gridLayout_10->addWidget(regenerate, 1, 11, 1, 1);

        newKeys = new QCheckBox(publicKeysBox);
        newKeys->setObjectName(QStringLiteral("newKeys"));
        sizePolicy6.setHeightForWidth(newKeys->sizePolicy().hasHeightForWidth());
        newKeys->setSizePolicy(sizePolicy6);

        gridLayout_10->addWidget(newKeys, 0, 0, 1, 1);

        horizontalSpacer_47 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_10->addItem(horizontalSpacer_47, 1, 13, 1, 1);

        delete_key = new QPushButton(publicKeysBox);
        delete_key->setObjectName(QStringLiteral("delete_key"));

        gridLayout_10->addWidget(delete_key, 1, 12, 1, 1);


        verticalLayout_49->addLayout(gridLayout_10);


        settingsVerticalLayout->addWidget(publicKeysBox);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(5);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        showStatistics = new QPushButton(scrollAreaWidgetContents);
        showStatistics->setObjectName(QStringLiteral("showStatistics"));
        showStatistics->setCheckable(true);

        horizontalLayout_11->addWidget(showStatistics);


        settingsVerticalLayout->addLayout(horizontalLayout_11);

        statisticsBox = new QGroupBox(scrollAreaWidgetContents);
        statisticsBox->setObjectName(QStringLiteral("statisticsBox"));
        verticalLayout_66 = new QVBoxLayout(statisticsBox);
        verticalLayout_66->setSpacing(5);
        verticalLayout_66->setObjectName(QStringLiteral("verticalLayout_66"));
        verticalLayout_66->setContentsMargins(5, 5, 5, 5);
        statistics = new QTableView(statisticsBox);
        statistics->setObjectName(QStringLiteral("statistics"));
        statistics->setMinimumSize(QSize(0, 150));
        statistics->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        statistics->setAlternatingRowColors(true);
        statistics->setSelectionMode(QAbstractItemView::SingleSelection);
        statistics->setSelectionBehavior(QAbstractItemView::SelectRows);
        statistics->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        statistics->setSortingEnabled(true);
        statistics->horizontalHeader()->setMinimumSectionSize(150);

        verticalLayout_66->addWidget(statistics);


        settingsVerticalLayout->addWidget(statisticsBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        settingsVerticalLayout->addItem(verticalSpacer);


        verticalLayout_35->addLayout(settingsVerticalLayout);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_15->addWidget(scrollArea);

        QIcon icon35;
        icon35.addFile(QStringLiteral(":/nuvola/settings_t.png"), QSize(), QIcon::Normal, QIcon::Off);
        tab->addTab(tab_settings, icon35, QString());
        tab_starbeam = new QWidget();
        tab_starbeam->setObjectName(QStringLiteral("tab_starbeam"));
        verticalLayout_39 = new QVBoxLayout(tab_starbeam);
        verticalLayout_39->setSpacing(5);
        verticalLayout_39->setObjectName(QStringLiteral("verticalLayout_39"));
        verticalLayout_39->setContentsMargins(5, 5, 5, 5);
        label_101 = new QLabel(tab_starbeam);
        label_101->setObjectName(QStringLiteral("label_101"));
        label_101->setMinimumSize(QSize(0, 40));
        label_101->setFont(font);
        label_101->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:reflect, x1:0.023, y1:0.988636, x2:0.028, y2:0.011, stop:0 rgba(218, 232, 255, 255), stop:1 rgba(170, 85, 255, 255));\n"
"color: rgb(255, 255, 255);"));
        label_101->setIndent(5);

        verticalLayout_39->addWidget(label_101);

        line_10 = new QFrame(tab_starbeam);
        line_10->setObjectName(QStringLiteral("line_10"));
        line_10->setFrameShape(QFrame::HLine);
        line_10->setFrameShadow(QFrame::Sunken);

        verticalLayout_39->addWidget(line_10);

        scrollArea_4 = new QScrollArea(tab_starbeam);
        scrollArea_4->setObjectName(QStringLiteral("scrollArea_4"));
        scrollArea_4->setFrameShape(QFrame::NoFrame);
        scrollArea_4->setWidgetResizable(true);
        scrollAreaWidgetContents_4 = new QWidget();
        scrollAreaWidgetContents_4->setObjectName(QStringLiteral("scrollAreaWidgetContents_4"));
        scrollAreaWidgetContents_4->setGeometry(QRect(0, 0, 564, 707));
        verticalLayout_43 = new QVBoxLayout(scrollAreaWidgetContents_4);
        verticalLayout_43->setSpacing(5);
        verticalLayout_43->setObjectName(QStringLiteral("verticalLayout_43"));
        verticalLayout_43->setContentsMargins(5, 5, 5, 5);
        etpTab = new QTabWidget(scrollAreaWidgetContents_4);
        etpTab->setObjectName(QStringLiteral("etpTab"));
        etpTab->setIconSize(QSize(40, 40));
        tab_SB_Magnets = new QWidget();
        tab_SB_Magnets->setObjectName(QStringLiteral("tab_SB_Magnets"));
        verticalLayout_48 = new QVBoxLayout(tab_SB_Magnets);
        verticalLayout_48->setSpacing(5);
        verticalLayout_48->setObjectName(QStringLiteral("verticalLayout_48"));
        verticalLayout_48->setContentsMargins(5, 5, 5, 5);
        horizontalLayout_71 = new QHBoxLayout();
        horizontalLayout_71->setSpacing(5);
        horizontalLayout_71->setObjectName(QStringLiteral("horizontalLayout_71"));
        magnetsActionMenu = new QToolButton(tab_SB_Magnets);
        magnetsActionMenu->setObjectName(QStringLiteral("magnetsActionMenu"));
        magnetsActionMenu->setIcon(icon12);
        magnetsActionMenu->setPopupMode(QToolButton::MenuButtonPopup);
        magnetsActionMenu->setAutoRaise(true);

        horizontalLayout_71->addWidget(magnetsActionMenu);

        horizontalSpacer_57 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_71->addItem(horizontalSpacer_57);


        verticalLayout_48->addLayout(horizontalLayout_71);

        etpMagnets = new QTableWidget(tab_SB_Magnets);
        if (etpMagnets->columnCount() < 3)
            etpMagnets->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem108 = new QTableWidgetItem();
        etpMagnets->setHorizontalHeaderItem(0, __qtablewidgetitem108);
        QTableWidgetItem *__qtablewidgetitem109 = new QTableWidgetItem();
        etpMagnets->setHorizontalHeaderItem(1, __qtablewidgetitem109);
        QTableWidgetItem *__qtablewidgetitem110 = new QTableWidgetItem();
        etpMagnets->setHorizontalHeaderItem(2, __qtablewidgetitem110);
        etpMagnets->setObjectName(QStringLiteral("etpMagnets"));
        etpMagnets->setAlternatingRowColors(true);
        etpMagnets->setSelectionMode(QAbstractItemView::SingleSelection);
        etpMagnets->setSelectionBehavior(QAbstractItemView::SelectRows);
        etpMagnets->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        etpMagnets->setSortingEnabled(true);
        etpMagnets->horizontalHeader()->setDefaultSectionSize(200);
        etpMagnets->horizontalHeader()->setStretchLastSection(true);

        verticalLayout_48->addWidget(etpMagnets);

        frame_2 = new QFrame(tab_SB_Magnets);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setFrameShape(QFrame::NoFrame);
        verticalLayout_42 = new QVBoxLayout(frame_2);
        verticalLayout_42->setSpacing(5);
        verticalLayout_42->setObjectName(QStringLiteral("verticalLayout_42"));
        verticalLayout_42->setContentsMargins(5, 5, 5, 5);
        horizontalLayout_59 = new QHBoxLayout();
        horizontalLayout_59->setSpacing(5);
        horizontalLayout_59->setObjectName(QStringLiteral("horizontalLayout_59"));
        magnetRadio = new QRadioButton(frame_2);
        magnetRadio->setObjectName(QStringLiteral("magnetRadio"));
        magnetRadio->setChecked(true);

        horizontalLayout_59->addWidget(magnetRadio);

        etpMagnet = new QTextEdit(frame_2);
        etpMagnet->setObjectName(QStringLiteral("etpMagnet"));
        sizePolicy1.setHeightForWidth(etpMagnet->sizePolicy().hasHeightForWidth());
        etpMagnet->setSizePolicy(sizePolicy1);
        etpMagnet->setFont(font1);
        etpMagnet->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0.968, y1:0.932, x2:0.513, y2:0.5, stop:0 rgba(183, 235, 255, 255), stop:1 rgba(255, 255, 255, 255)); "));
        etpMagnet->setTabChangesFocus(true);
        etpMagnet->setAcceptRichText(false);

        horizontalLayout_59->addWidget(etpMagnet);


        verticalLayout_42->addLayout(horizontalLayout_59);

        horizontalLayout_53 = new QHBoxLayout();
        horizontalLayout_53->setSpacing(5);
        horizontalLayout_53->setObjectName(QStringLiteral("horizontalLayout_53"));
        pairRadio = new QRadioButton(frame_2);
        pairRadio->setObjectName(QStringLiteral("pairRadio"));
        sizePolicy6.setHeightForWidth(pairRadio->sizePolicy().hasHeightForWidth());
        pairRadio->setSizePolicy(sizePolicy6);

        horizontalLayout_53->addWidget(pairRadio);

        generate = new QComboBox(frame_2);
        generate->setObjectName(QStringLiteral("generate"));
        generate->setSizeAdjustPolicy(QComboBox::AdjustToContents);
        generate->setMinimumContentsLength(25);

        horizontalLayout_53->addWidget(generate);

        horizontalSpacer_41 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_53->addItem(horizontalSpacer_41);


        verticalLayout_42->addLayout(horizontalLayout_53);

        pairFrame = new QFrame(frame_2);
        pairFrame->setObjectName(QStringLiteral("pairFrame"));
        pairFrame->setFrameShape(QFrame::NoFrame);
        verticalLayout_45 = new QVBoxLayout(pairFrame);
        verticalLayout_45->setSpacing(5);
        verticalLayout_45->setObjectName(QStringLiteral("verticalLayout_45"));
        verticalLayout_45->setContentsMargins(5, 5, 5, 5);
        gridLayout_7 = new QGridLayout();
        gridLayout_7->setSpacing(5);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        label_52 = new QLabel(pairFrame);
        label_52->setObjectName(QStringLiteral("label_52"));

        gridLayout_7->addWidget(label_52, 0, 4, 1, 1);

        label_51 = new QLabel(pairFrame);
        label_51->setObjectName(QStringLiteral("label_51"));

        gridLayout_7->addWidget(label_51, 1, 2, 1, 1);

        etpCipherType = new QComboBox(pairFrame);
        etpCipherType->setObjectName(QStringLiteral("etpCipherType"));
        etpCipherType->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        gridLayout_7->addWidget(etpCipherType, 0, 5, 1, 1);

        etpEncryptionKey = new QLineEdit(pairFrame);
        etpEncryptionKey->setObjectName(QStringLiteral("etpEncryptionKey"));

        gridLayout_7->addWidget(etpEncryptionKey, 0, 3, 1, 1);

        label_50 = new QLabel(pairFrame);
        label_50->setObjectName(QStringLiteral("label_50"));

        gridLayout_7->addWidget(label_50, 0, 2, 1, 1);

        etpMacKey = new QLineEdit(pairFrame);
        etpMacKey->setObjectName(QStringLiteral("etpMacKey"));

        gridLayout_7->addWidget(etpMacKey, 1, 3, 1, 1);

        label_57 = new QLabel(pairFrame);
        label_57->setObjectName(QStringLiteral("label_57"));

        gridLayout_7->addWidget(label_57, 1, 4, 1, 1);

        etpHashType = new QComboBox(pairFrame);
        etpHashType->setObjectName(QStringLiteral("etpHashType"));
        etpHashType->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        gridLayout_7->addWidget(etpHashType, 1, 5, 1, 1);


        verticalLayout_45->addLayout(gridLayout_7);


        verticalLayout_42->addWidget(pairFrame);


        verticalLayout_48->addWidget(frame_2);

        horizontalLayout_57 = new QHBoxLayout();
        horizontalLayout_57->setSpacing(5);
        horizontalLayout_57->setObjectName(QStringLiteral("horizontalLayout_57"));
        addMagnet = new QPushButton(tab_SB_Magnets);
        addMagnet->setObjectName(QStringLiteral("addMagnet"));
        addMagnet->setStyleSheet(QLatin1String("QPushButton {\n"
" border: 2px solid gray;\n"
" background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                   stop: 0 #E0E0E0, stop: 1 #FFFFFF);\n"
" border-radius: 5px;\n"
" margin: 2px;\n"
" padding: 2px;\n"
" }\n"
"\n"
"\n"
"QPushButton:hover { \n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                   stop: 0 rgb(254,229,172), stop: 1 #FFFFFF);\n"
"background-position: top center; } \n"
"\n"
"QPushButton:pressed {\n"
"     background-color: darkgrey;\n"
"     border-style: inset;\n"
" }"));
        addMagnet->setIcon(icon4);
        addMagnet->setIconSize(QSize(40, 40));

        horizontalLayout_57->addWidget(addMagnet);


        verticalLayout_48->addLayout(horizontalLayout_57);

        groupBox_8 = new QGroupBox(tab_SB_Magnets);
        groupBox_8->setObjectName(QStringLiteral("groupBox_8"));
        verticalLayout_25 = new QVBoxLayout(groupBox_8);
        verticalLayout_25->setSpacing(5);
        verticalLayout_25->setObjectName(QStringLiteral("verticalLayout_25"));
        verticalLayout_25->setContentsMargins(5, 5, 5, 5);
        novas = new QListWidget(groupBox_8);
        novas->setObjectName(QStringLiteral("novas"));
        novas->setTabKeyNavigation(true);
        novas->setSelectionBehavior(QAbstractItemView::SelectRows);
        novas->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);

        verticalLayout_25->addWidget(novas);

        receiveNova = new QLineEdit(groupBox_8);
        receiveNova->setObjectName(QStringLiteral("receiveNova"));

        verticalLayout_25->addWidget(receiveNova);

        horizontalLayout_43 = new QHBoxLayout();
        horizontalLayout_43->setSpacing(5);
        horizontalLayout_43->setObjectName(QStringLiteral("horizontalLayout_43"));
        label_90 = new QLabel(groupBox_8);
        label_90->setObjectName(QStringLiteral("label_90"));

        horizontalLayout_43->addWidget(label_90);

        horizontalSpacer_40 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_43->addItem(horizontalSpacer_40);

        addNova = new QPushButton(groupBox_8);
        addNova->setObjectName(QStringLiteral("addNova"));
        sizePolicy11.setHeightForWidth(addNova->sizePolicy().hasHeightForWidth());
        addNova->setSizePolicy(sizePolicy11);
        addNova->setStyleSheet(QLatin1String("QPushButton {\n"
" border: 2px solid gray;\n"
" background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                   stop: 0 #E0E0E0, stop: 1 #FFFFFF);\n"
" border-radius: 5px;\n"
" margin: 2px;\n"
" padding: 2px;\n"
" }\n"
"\n"
"\n"
"QPushButton:hover { \n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                   stop: 0 rgb(254,229,172), stop: 1 #FFFFFF);\n"
"background-position: top center; } \n"
"\n"
"QPushButton:pressed {\n"
"     background-color: darkgrey;\n"
"     border-style: inset;\n"
" }"));

        horizontalLayout_43->addWidget(addNova);

        deleteNova = new QPushButton(groupBox_8);
        deleteNova->setObjectName(QStringLiteral("deleteNova"));
        sizePolicy9.setHeightForWidth(deleteNova->sizePolicy().hasHeightForWidth());
        deleteNova->setSizePolicy(sizePolicy9);
        deleteNova->setStyleSheet(QLatin1String("QPushButton {\n"
" border: 2px solid gray;\n"
" background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                   stop: 0 #E0E0E0, stop: 1 #FFFFFF);\n"
" border-radius: 5px;\n"
" margin: 2px;\n"
" padding: 2px;\n"
" }\n"
"\n"
"\n"
"QPushButton:hover { \n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                   stop: 0 rgb(254,229,172), stop: 1 #FFFFFF);\n"
"background-position: top center; } \n"
"\n"
"QPushButton:pressed {\n"
"     background-color: darkgrey;\n"
"     border-style: inset;\n"
" }"));

        horizontalLayout_43->addWidget(deleteNova);


        verticalLayout_25->addLayout(horizontalLayout_43);


        verticalLayout_48->addWidget(groupBox_8);

        QIcon icon36;
        icon36.addFile(QStringLiteral(":/nuvola/magnet.png"), QSize(), QIcon::Normal, QIcon::Off);
        etpTab->addTab(tab_SB_Magnets, icon36, QString());
        tab_SB_incoming = new QWidget();
        tab_SB_incoming->setObjectName(QStringLiteral("tab_SB_incoming"));
        verticalLayout_44 = new QVBoxLayout(tab_SB_incoming);
        verticalLayout_44->setSpacing(5);
        verticalLayout_44->setObjectName(QStringLiteral("verticalLayout_44"));
        verticalLayout_44->setContentsMargins(5, 5, 5, 5);
        splitter = new QSplitter(tab_SB_incoming);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Vertical);
        receivers = new QGroupBox(splitter);
        receivers->setObjectName(QStringLiteral("receivers"));
        receivers->setCheckable(true);
        receivers->setChecked(false);
        verticalLayout_41 = new QVBoxLayout(receivers);
        verticalLayout_41->setSpacing(5);
        verticalLayout_41->setObjectName(QStringLiteral("verticalLayout_41"));
        verticalLayout_41->setContentsMargins(5, 5, 5, 5);
        received = new QTableWidget(receivers);
        if (received->columnCount() < 8)
            received->setColumnCount(8);
        QTableWidgetItem *__qtablewidgetitem111 = new QTableWidgetItem();
        received->setHorizontalHeaderItem(0, __qtablewidgetitem111);
        QTableWidgetItem *__qtablewidgetitem112 = new QTableWidgetItem();
        received->setHorizontalHeaderItem(1, __qtablewidgetitem112);
        QTableWidgetItem *__qtablewidgetitem113 = new QTableWidgetItem();
        received->setHorizontalHeaderItem(2, __qtablewidgetitem113);
        QTableWidgetItem *__qtablewidgetitem114 = new QTableWidgetItem();
        received->setHorizontalHeaderItem(3, __qtablewidgetitem114);
        QTableWidgetItem *__qtablewidgetitem115 = new QTableWidgetItem();
        received->setHorizontalHeaderItem(4, __qtablewidgetitem115);
        QTableWidgetItem *__qtablewidgetitem116 = new QTableWidgetItem();
        received->setHorizontalHeaderItem(5, __qtablewidgetitem116);
        QTableWidgetItem *__qtablewidgetitem117 = new QTableWidgetItem();
        received->setHorizontalHeaderItem(6, __qtablewidgetitem117);
        QTableWidgetItem *__qtablewidgetitem118 = new QTableWidgetItem();
        received->setHorizontalHeaderItem(7, __qtablewidgetitem118);
        received->setObjectName(QStringLiteral("received"));
        received->setStyleSheet(QLatin1String("QTableWidget#received\n"
"\n"
"{\n"
"   border-image: url(:/Logo/background.png) 0 0 0 0 stretch stretch;\n"
"   border-width: 0px;\n"
"}"));
        received->setAlternatingRowColors(true);
        received->setSelectionMode(QAbstractItemView::SingleSelection);
        received->setSelectionBehavior(QAbstractItemView::SelectRows);
        received->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        received->setSortingEnabled(true);
        received->horizontalHeader()->setDefaultSectionSize(200);
        received->horizontalHeader()->setStretchLastSection(true);

        verticalLayout_41->addWidget(received);

        horizontalLayout_54 = new QHBoxLayout();
        horizontalLayout_54->setSpacing(5);
        horizontalLayout_54->setObjectName(QStringLiteral("horizontalLayout_54"));
        label_63 = new QLabel(receivers);
        label_63->setObjectName(QStringLiteral("label_63"));

        horizontalLayout_54->addWidget(label_63);

        destination = new QLineEdit(receivers);
        destination->setObjectName(QStringLiteral("destination"));

        horizontalLayout_54->addWidget(destination);

        etpSelectDestination = new QPushButton(receivers);
        etpSelectDestination->setObjectName(QStringLiteral("etpSelectDestination"));

        horizontalLayout_54->addWidget(etpSelectDestination);


        verticalLayout_41->addLayout(horizontalLayout_54);

        horizontalLayout_55 = new QHBoxLayout();
        horizontalLayout_55->setSpacing(5);
        horizontalLayout_55->setObjectName(QStringLiteral("horizontalLayout_55"));
        receivedActionMenu = new QToolButton(receivers);
        receivedActionMenu->setObjectName(QStringLiteral("receivedActionMenu"));
        receivedActionMenu->setIcon(icon12);
        receivedActionMenu->setPopupMode(QToolButton::MenuButtonPopup);
        receivedActionMenu->setAutoRaise(true);

        horizontalLayout_55->addWidget(receivedActionMenu);

        horizontalSpacer_44 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_55->addItem(horizontalSpacer_44);

        label_59 = new QLabel(receivers);
        label_59->setObjectName(QStringLiteral("label_59"));

        horizontalLayout_55->addWidget(label_59);

        etpMaxMosaicSize = new QSpinBox(receivers);
        etpMaxMosaicSize->setObjectName(QStringLiteral("etpMaxMosaicSize"));
        etpMaxMosaicSize->setMinimum(1);
        etpMaxMosaicSize->setMaximum(5000);
        etpMaxMosaicSize->setValue(512);

        horizontalLayout_55->addWidget(etpMaxMosaicSize);


        verticalLayout_41->addLayout(horizontalLayout_55);

        label_117 = new QLabel(receivers);
        label_117->setObjectName(QStringLiteral("label_117"));
        label_117->setWordWrap(true);

        verticalLayout_41->addWidget(label_117);

        splitter->addWidget(receivers);

        verticalLayout_44->addWidget(splitter);

        etpTab->addTab(tab_SB_incoming, icon15, QString());
        tab_SB_Upload = new QWidget();
        tab_SB_Upload->setObjectName(QStringLiteral("tab_SB_Upload"));
        verticalLayout_46 = new QVBoxLayout(tab_SB_Upload);
        verticalLayout_46->setSpacing(5);
        verticalLayout_46->setObjectName(QStringLiteral("verticalLayout_46"));
        verticalLayout_46->setContentsMargins(5, 5, 5, 5);
        groupBox_9 = new QGroupBox(tab_SB_Upload);
        groupBox_9->setObjectName(QStringLiteral("groupBox_9"));
        verticalLayout_56 = new QVBoxLayout(groupBox_9);
        verticalLayout_56->setSpacing(3);
        verticalLayout_56->setObjectName(QStringLiteral("verticalLayout_56"));
        verticalLayout_56->setContentsMargins(3, 3, 3, 3);
        label_91 = new QLabel(groupBox_9);
        label_91->setObjectName(QStringLiteral("label_91"));

        verticalLayout_56->addWidget(label_91);

        horizontalLayout_44 = new QHBoxLayout();
        horizontalLayout_44->setSpacing(1);
        horizontalLayout_44->setObjectName(QStringLiteral("horizontalLayout_44"));
        label_53 = new QLabel(groupBox_9);
        label_53->setObjectName(QStringLiteral("label_53"));

        horizontalLayout_44->addWidget(label_53);

        transmittedFile = new QLineEdit(groupBox_9);
        transmittedFile->setObjectName(QStringLiteral("transmittedFile"));

        horizontalLayout_44->addWidget(transmittedFile);

        etpSelectFile = new QPushButton(groupBox_9);
        etpSelectFile->setObjectName(QStringLiteral("etpSelectFile"));
        etpSelectFile->setStyleSheet(QLatin1String("QPushButton {\n"
" border: 2px solid gray;\n"
" background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                   stop: 0 #E0E0E0, stop: 1 #FFFFFF);\n"
" border-radius: 5px;\n"
" margin: 2px;\n"
" padding: 2px;\n"
" }\n"
"\n"
"\n"
"QPushButton:hover { \n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                   stop: 0 rgb(254,229,172), stop: 1 #FFFFFF);\n"
"background-position: top center; } \n"
"\n"
"QPushButton:pressed {\n"
"     background-color: darkgrey;\n"
"     border-style: inset;\n"
" }"));

        horizontalLayout_44->addWidget(etpSelectFile);


        verticalLayout_56->addLayout(horizontalLayout_44);

        addTransmittedMagnets = new QTableWidget(groupBox_9);
        if (addTransmittedMagnets->columnCount() < 2)
            addTransmittedMagnets->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem119 = new QTableWidgetItem();
        addTransmittedMagnets->setHorizontalHeaderItem(0, __qtablewidgetitem119);
        QTableWidgetItem *__qtablewidgetitem120 = new QTableWidgetItem();
        addTransmittedMagnets->setHorizontalHeaderItem(1, __qtablewidgetitem120);
        addTransmittedMagnets->setObjectName(QStringLiteral("addTransmittedMagnets"));
        addTransmittedMagnets->setAlternatingRowColors(true);
        addTransmittedMagnets->setSelectionMode(QAbstractItemView::SingleSelection);
        addTransmittedMagnets->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        addTransmittedMagnets->setSortingEnabled(true);
        addTransmittedMagnets->horizontalHeader()->setDefaultSectionSize(125);
        addTransmittedMagnets->horizontalHeader()->setMinimumSectionSize(125);
        addTransmittedMagnets->horizontalHeader()->setStretchLastSection(true);

        verticalLayout_56->addWidget(addTransmittedMagnets);

        label_126 = new QLabel(groupBox_9);
        label_126->setObjectName(QStringLiteral("label_126"));

        verticalLayout_56->addWidget(label_126);

        horizontalLayout_68 = new QHBoxLayout();
        horizontalLayout_68->setSpacing(3);
        horizontalLayout_68->setObjectName(QStringLiteral("horizontalLayout_68"));
        horizontalLayout_68->setContentsMargins(-1, 0, 0, -1);
        transmitNova = new QLineEdit(groupBox_9);
        transmitNova->setObjectName(QStringLiteral("transmitNova"));

        horizontalLayout_68->addWidget(transmitNova);

        generateNova = new QPushButton(groupBox_9);
        generateNova->setObjectName(QStringLiteral("generateNova"));
        generateNova->setStyleSheet(QLatin1String("QPushButton {\n"
" border: 2px solid gray;\n"
" background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                   stop: 0 #E0E0E0, stop: 1 #FFFFFF);\n"
" border-radius: 5px;\n"
" margin: 2px;\n"
" padding: 2px;\n"
" }\n"
"\n"
"\n"
"QPushButton:hover { \n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                   stop: 0 rgb(254,229,172), stop: 1 #FFFFFF);\n"
"background-position: top center; } \n"
"\n"
"QPushButton:pressed {\n"
"     background-color: darkgrey;\n"
"     border-style: inset;\n"
" }"));

        horizontalLayout_68->addWidget(generateNova);


        verticalLayout_56->addLayout(horizontalLayout_68);

        horizontalLayout_69 = new QHBoxLayout();
        horizontalLayout_69->setSpacing(1);
        horizontalLayout_69->setObjectName(QStringLiteral("horizontalLayout_69"));
        horizontalLayout_69->setContentsMargins(-1, 0, -1, -1);
        label_54 = new QLabel(groupBox_9);
        label_54->setObjectName(QStringLiteral("label_54"));

        horizontalLayout_69->addWidget(label_54);

        pulseSize = new QSpinBox(groupBox_9);
        pulseSize->setObjectName(QStringLiteral("pulseSize"));
        pulseSize->setMinimum(1024);
        pulseSize->setMaximum(999999999);
        pulseSize->setValue(15000);

        horizontalLayout_69->addWidget(pulseSize);

        fragment_starbeam = new QCheckBox(groupBox_9);
        fragment_starbeam->setObjectName(QStringLiteral("fragment_starbeam"));

        horizontalLayout_69->addWidget(fragment_starbeam);

        horizontalSpacer_8 = new QSpacerItem(1, 1, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_69->addItem(horizontalSpacer_8);


        verticalLayout_56->addLayout(horizontalLayout_69);

        horizontalLayout_74 = new QHBoxLayout();
        horizontalLayout_74->setSpacing(5);
        horizontalLayout_74->setObjectName(QStringLiteral("horizontalLayout_74"));
        missingLinksCheckBox = new QCheckBox(groupBox_9);
        missingLinksCheckBox->setObjectName(QStringLiteral("missingLinksCheckBox"));
        sizePolicy6.setHeightForWidth(missingLinksCheckBox->sizePolicy().hasHeightForWidth());
        missingLinksCheckBox->setSizePolicy(sizePolicy6);

        horizontalLayout_74->addWidget(missingLinksCheckBox);

        missingLinks = new QLineEdit(groupBox_9);
        missingLinks->setObjectName(QStringLiteral("missingLinks"));

        horizontalLayout_74->addWidget(missingLinks);

        demagnetizeMissingLinks = new QPushButton(groupBox_9);
        demagnetizeMissingLinks->setObjectName(QStringLiteral("demagnetizeMissingLinks"));

        horizontalLayout_74->addWidget(demagnetizeMissingLinks);


        verticalLayout_56->addLayout(horizontalLayout_74);

        transmit = new QPushButton(groupBox_9);
        transmit->setObjectName(QStringLiteral("transmit"));
        transmit->setStyleSheet(QLatin1String("QPushButton {\n"
" border: 2px solid gray;\n"
" background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                   stop: 0 #E0E0E0, stop: 1 #FFFFFF);\n"
" border-radius: 5px;\n"
" margin: 2px;\n"
" padding: 2px;\n"
" }\n"
"\n"
"\n"
"QPushButton:hover { \n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                   stop: 0 rgb(254,229,172), stop: 1 #FFFFFF);\n"
"background-position: top center; } \n"
"\n"
"QPushButton:pressed {\n"
"     background-color: darkgrey;\n"
"     border-style: inset;\n"
" }"));
        transmit->setIcon(icon21);
        transmit->setIconSize(QSize(40, 40));

        verticalLayout_56->addWidget(transmit);

        txmSplitter = new QSplitter(groupBox_9);
        txmSplitter->setObjectName(QStringLiteral("txmSplitter"));
        txmSplitter->setOrientation(Qt::Vertical);
        transmitted = new QTableWidget(txmSplitter);
        if (transmitted->columnCount() < 10)
            transmitted->setColumnCount(10);
        QTableWidgetItem *__qtablewidgetitem121 = new QTableWidgetItem();
        transmitted->setHorizontalHeaderItem(0, __qtablewidgetitem121);
        QTableWidgetItem *__qtablewidgetitem122 = new QTableWidgetItem();
        transmitted->setHorizontalHeaderItem(1, __qtablewidgetitem122);
        QTableWidgetItem *__qtablewidgetitem123 = new QTableWidgetItem();
        transmitted->setHorizontalHeaderItem(2, __qtablewidgetitem123);
        QTableWidgetItem *__qtablewidgetitem124 = new QTableWidgetItem();
        transmitted->setHorizontalHeaderItem(3, __qtablewidgetitem124);
        QTableWidgetItem *__qtablewidgetitem125 = new QTableWidgetItem();
        transmitted->setHorizontalHeaderItem(4, __qtablewidgetitem125);
        QTableWidgetItem *__qtablewidgetitem126 = new QTableWidgetItem();
        transmitted->setHorizontalHeaderItem(5, __qtablewidgetitem126);
        QTableWidgetItem *__qtablewidgetitem127 = new QTableWidgetItem();
        transmitted->setHorizontalHeaderItem(6, __qtablewidgetitem127);
        QTableWidgetItem *__qtablewidgetitem128 = new QTableWidgetItem();
        transmitted->setHorizontalHeaderItem(7, __qtablewidgetitem128);
        QTableWidgetItem *__qtablewidgetitem129 = new QTableWidgetItem();
        transmitted->setHorizontalHeaderItem(8, __qtablewidgetitem129);
        QTableWidgetItem *__qtablewidgetitem130 = new QTableWidgetItem();
        transmitted->setHorizontalHeaderItem(9, __qtablewidgetitem130);
        transmitted->setObjectName(QStringLiteral("transmitted"));
        transmitted->setAlternatingRowColors(true);
        transmitted->setSelectionMode(QAbstractItemView::SingleSelection);
        transmitted->setSelectionBehavior(QAbstractItemView::SelectRows);
        transmitted->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        transmitted->setSortingEnabled(true);
        txmSplitter->addWidget(transmitted);
        transmitted->horizontalHeader()->setDefaultSectionSize(125);
        transmitted->horizontalHeader()->setMinimumSectionSize(25);
        transmitted->horizontalHeader()->setStretchLastSection(true);
        transmittedMagnets = new QListWidget(txmSplitter);
        transmittedMagnets->setObjectName(QStringLiteral("transmittedMagnets"));
        transmittedMagnets->setTabKeyNavigation(true);
        transmittedMagnets->setSelectionMode(QAbstractItemView::SingleSelection);
        transmittedMagnets->setSelectionBehavior(QAbstractItemView::SelectRows);
        transmittedMagnets->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        transmittedMagnets->setWordWrap(false);
        txmSplitter->addWidget(transmittedMagnets);

        verticalLayout_56->addWidget(txmSplitter);

        horizontalLayout_72 = new QHBoxLayout();
        horizontalLayout_72->setSpacing(0);
        horizontalLayout_72->setObjectName(QStringLiteral("horizontalLayout_72"));
        horizontalLayout_72->setContentsMargins(0, 0, -1, -1);
        transmittedActionMenu = new QToolButton(groupBox_9);
        transmittedActionMenu->setObjectName(QStringLiteral("transmittedActionMenu"));
        transmittedActionMenu->setStyleSheet(QLatin1String("QPushButton {\n"
" border: 2px solid gray;\n"
" background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                   stop: 0 #E0E0E0, stop: 1 #FFFFFF);\n"
" border-radius: 5px;\n"
" margin: 2px;\n"
" padding: 2px;\n"
" }\n"
"\n"
"\n"
"QPushButton:hover { \n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                   stop: 0 rgb(254,229,172), stop: 1 #FFFFFF);\n"
"background-position: top center; } \n"
"\n"
"QPushButton:pressed {\n"
"     background-color: darkgrey;\n"
"     border-style: inset;\n"
" }"));
        transmittedActionMenu->setIcon(icon12);
        transmittedActionMenu->setPopupMode(QToolButton::MenuButtonPopup);
        transmittedActionMenu->setAutoRaise(true);

        horizontalLayout_72->addWidget(transmittedActionMenu);

        rewind = new QPushButton(groupBox_9);
        rewind->setObjectName(QStringLiteral("rewind"));
        rewind->setStyleSheet(QLatin1String("QPushButton {\n"
" border: 2px solid gray;\n"
" background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                   stop: 0 #E0E0E0, stop: 1 #FFFFFF);\n"
" border-radius: 5px;\n"
" margin: 2px;\n"
" padding: 2px;\n"
" }\n"
"\n"
"\n"
"QPushButton:hover { \n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                   stop: 0 rgb(254,229,172), stop: 1 #FFFFFF);\n"
"background-position: top center; } \n"
"\n"
"QPushButton:pressed {\n"
"     background-color: darkgrey;\n"
"     border-style: inset;\n"
" }"));
        rewind->setIcon(icon14);

        horizontalLayout_72->addWidget(rewind);


        verticalLayout_56->addLayout(horizontalLayout_72);


        verticalLayout_46->addWidget(groupBox_9);

        etpTab->addTab(tab_SB_Upload, icon21, QString());

        verticalLayout_43->addWidget(etpTab);

        scrollArea_4->setWidget(scrollAreaWidgetContents_4);

        verticalLayout_39->addWidget(scrollArea_4);

        QIcon icon37;
        icon37.addFile(QStringLiteral(":/nuvola/starbeam_t.png"), QSize(), QIcon::Normal, QIcon::Off);
        tab->addTab(tab_starbeam, icon37, QString());
        tab_cultivation = new QWidget();
        tab_cultivation->setObjectName(QStringLiteral("tab_cultivation"));
        verticalLayout_10 = new QVBoxLayout(tab_cultivation);
        verticalLayout_10->setSpacing(5);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(5, 5, 5, 5);
        label_121 = new QLabel(tab_cultivation);
        label_121->setObjectName(QStringLiteral("label_121"));
        label_121->setMinimumSize(QSize(0, 40));
        label_121->setFont(font);
        label_121->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:reflect, x1:0.023, y1:0.988636, x2:0.028, y2:0.011, stop:0 rgba(218, 232, 255, 255), stop:1 rgba(170, 85, 255, 255));\n"
"color: rgb(255, 255, 255);\n"
""));
        label_121->setIndent(5);

        verticalLayout_10->addWidget(label_121);

        line_11 = new QFrame(tab_cultivation);
        line_11->setObjectName(QStringLiteral("line_11"));
        line_11->setFrameShape(QFrame::HLine);
        line_11->setFrameShadow(QFrame::Sunken);

        verticalLayout_10->addWidget(line_11);

        scrollArea_10 = new QScrollArea(tab_cultivation);
        scrollArea_10->setObjectName(QStringLiteral("scrollArea_10"));
        scrollArea_10->setFrameShape(QFrame::NoFrame);
        scrollArea_10->setWidgetResizable(true);
        scrollAreaWidgetContents_10 = new QWidget();
        scrollAreaWidgetContents_10->setObjectName(QStringLiteral("scrollAreaWidgetContents_10"));
        scrollAreaWidgetContents_10->setGeometry(QRect(0, 0, 578, 682));
        verticalLayout_58 = new QVBoxLayout(scrollAreaWidgetContents_10);
        verticalLayout_58->setSpacing(5);
        verticalLayout_58->setObjectName(QStringLiteral("verticalLayout_58"));
        verticalLayout_58->setContentsMargins(5, 5, 5, 5);
        horizontalLayout_56 = new QHBoxLayout();
        horizontalLayout_56->setSpacing(5);
        horizontalLayout_56->setObjectName(QStringLiteral("horizontalLayout_56"));
        activeUrlDistribution = new QCheckBox(scrollAreaWidgetContents_10);
        activeUrlDistribution->setObjectName(QStringLiteral("activeUrlDistribution"));
        sizePolicy6.setHeightForWidth(activeUrlDistribution->sizePolicy().hasHeightForWidth());
        activeUrlDistribution->setSizePolicy(sizePolicy6);
        QFont font3;
        font3.setPointSize(10);
        font3.setBold(true);
        font3.setWeight(75);
        activeUrlDistribution->setFont(font3);
        activeUrlDistribution->setChecked(true);

        horizontalLayout_56->addWidget(activeUrlDistribution);

        line_2 = new QFrame(scrollAreaWidgetContents_10);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout_56->addWidget(line_2);

        label_104 = new QLabel(scrollAreaWidgetContents_10);
        label_104->setObjectName(QStringLiteral("label_104"));

        horizontalLayout_56->addWidget(label_104);

        urlDistributionModel = new QComboBox(scrollAreaWidgetContents_10);
        urlDistributionModel->setObjectName(QStringLiteral("urlDistributionModel"));
        urlDistributionModel->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        horizontalLayout_56->addWidget(urlDistributionModel);

        horizontalSpacer_38 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_56->addItem(horizontalSpacer_38);


        verticalLayout_58->addLayout(horizontalLayout_56);

        urlsVerticalSplitter = new QSplitter(scrollAreaWidgetContents_10);
        urlsVerticalSplitter->setObjectName(QStringLiteral("urlsVerticalSplitter"));
        urlsVerticalSplitter->setOrientation(Qt::Vertical);
        groupBox_2 = new QGroupBox(urlsVerticalSplitter);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        verticalLayout_32 = new QVBoxLayout(groupBox_2);
        verticalLayout_32->setSpacing(5);
        verticalLayout_32->setObjectName(QStringLiteral("verticalLayout_32"));
        verticalLayout_32->setContentsMargins(5, 5, 5, 5);
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(5);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        urlActionMenu = new QToolButton(groupBox_2);
        urlActionMenu->setObjectName(QStringLiteral("urlActionMenu"));
        urlActionMenu->setIcon(icon12);
        urlActionMenu->setPopupMode(QToolButton::MenuButtonPopup);
        urlActionMenu->setAutoRaise(true);

        horizontalLayout_12->addWidget(urlActionMenu);

        horizontalSpacer_39 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_39);

        label_22 = new QLabel(groupBox_2);
        label_22->setObjectName(QStringLiteral("label_22"));

        horizontalLayout_12->addWidget(label_22);

        urlName = new QLineEdit(groupBox_2);
        urlName->setObjectName(QStringLiteral("urlName"));

        horizontalLayout_12->addWidget(urlName);

        saveUrlName = new QPushButton(groupBox_2);
        saveUrlName->setObjectName(QStringLiteral("saveUrlName"));
        sizePolicy11.setHeightForWidth(saveUrlName->sizePolicy().hasHeightForWidth());
        saveUrlName->setSizePolicy(sizePolicy11);
        saveUrlName->setStyleSheet(QLatin1String("QPushButton {\n"
" border: 2px solid gray;\n"
" background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                   stop: 0 #E0E0E0, stop: 1 #FFFFFF);\n"
" border-radius: 5px;\n"
" margin: 2px;\n"
" padding: 2px;\n"
" }\n"
"\n"
"\n"
"QPushButton:hover { \n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                   stop: 0 rgb(254,229,172), stop: 1 #FFFFFF);\n"
"background-position: top center; } \n"
"\n"
"QPushButton:pressed {\n"
"     background-color: darkgrey;\n"
"     border-style: inset;\n"
" }"));
        saveUrlName->setIcon(icon3);

        horizontalLayout_12->addWidget(saveUrlName);


        verticalLayout_32->addLayout(horizontalLayout_12);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(5);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));

        verticalLayout_32->addLayout(horizontalLayout_4);

        urlParticipants = new QTableWidget(groupBox_2);
        if (urlParticipants->columnCount() < 4)
            urlParticipants->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem131 = new QTableWidgetItem();
        urlParticipants->setHorizontalHeaderItem(0, __qtablewidgetitem131);
        QTableWidgetItem *__qtablewidgetitem132 = new QTableWidgetItem();
        urlParticipants->setHorizontalHeaderItem(1, __qtablewidgetitem132);
        QTableWidgetItem *__qtablewidgetitem133 = new QTableWidgetItem();
        urlParticipants->setHorizontalHeaderItem(2, __qtablewidgetitem133);
        QTableWidgetItem *__qtablewidgetitem134 = new QTableWidgetItem();
        urlParticipants->setHorizontalHeaderItem(3, __qtablewidgetitem134);
        urlParticipants->setObjectName(QStringLiteral("urlParticipants"));
        urlParticipants->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        urlParticipants->setAlternatingRowColors(true);
        urlParticipants->setSelectionBehavior(QAbstractItemView::SelectRows);
        urlParticipants->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        urlParticipants->setSortingEnabled(true);
        urlParticipants->horizontalHeader()->setDefaultSectionSize(150);
        urlParticipants->horizontalHeader()->setStretchLastSection(true);

        verticalLayout_32->addWidget(urlParticipants);

        urlsVerticalSplitter->addWidget(groupBox_2);
        urlPolarizers = new QGroupBox(urlsVerticalSplitter);
        urlPolarizers->setObjectName(QStringLiteral("urlPolarizers"));
        verticalLayout_11 = new QVBoxLayout(urlPolarizers);
        verticalLayout_11->setSpacing(5);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        verticalLayout_11->setContentsMargins(5, 5, 5, 5);
        label_9 = new QLabel(urlPolarizers);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setWordWrap(true);

        verticalLayout_11->addWidget(label_9);

        urlTab = new QTabWidget(urlPolarizers);
        urlTab->setObjectName(QStringLiteral("urlTab"));
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        verticalLayout_13 = new QVBoxLayout(tab_2);
        verticalLayout_13->setSpacing(5);
        verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
        verticalLayout_13->setContentsMargins(5, 5, 5, 5);
        downDistillers = new QTableWidget(tab_2);
        if (downDistillers->columnCount() < 2)
            downDistillers->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem135 = new QTableWidgetItem();
        downDistillers->setHorizontalHeaderItem(0, __qtablewidgetitem135);
        QTableWidgetItem *__qtablewidgetitem136 = new QTableWidgetItem();
        downDistillers->setHorizontalHeaderItem(1, __qtablewidgetitem136);
        downDistillers->setObjectName(QStringLiteral("downDistillers"));
        downDistillers->setTabKeyNavigation(true);
        downDistillers->setAlternatingRowColors(true);
        downDistillers->setSelectionMode(QAbstractItemView::ExtendedSelection);
        downDistillers->setSelectionBehavior(QAbstractItemView::SelectRows);
        downDistillers->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        downDistillers->horizontalHeader()->setStretchLastSection(true);

        verticalLayout_13->addWidget(downDistillers);

        urlTab->addTab(tab_2, icon15, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        verticalLayout_8 = new QVBoxLayout(tab_5);
        verticalLayout_8->setSpacing(5);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(5, 5, 5, 5);
        sharedDistillers = new QTableWidget(tab_5);
        if (sharedDistillers->columnCount() < 2)
            sharedDistillers->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem137 = new QTableWidgetItem();
        sharedDistillers->setHorizontalHeaderItem(0, __qtablewidgetitem137);
        QTableWidgetItem *__qtablewidgetitem138 = new QTableWidgetItem();
        sharedDistillers->setHorizontalHeaderItem(1, __qtablewidgetitem138);
        sharedDistillers->setObjectName(QStringLiteral("sharedDistillers"));
        sharedDistillers->setTabKeyNavigation(true);
        sharedDistillers->setAlternatingRowColors(true);
        sharedDistillers->setSelectionMode(QAbstractItemView::ExtendedSelection);
        sharedDistillers->setSelectionBehavior(QAbstractItemView::SelectRows);
        sharedDistillers->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        sharedDistillers->horizontalHeader()->setStretchLastSection(true);

        verticalLayout_8->addWidget(sharedDistillers);

        urlTab->addTab(tab_5, icon15, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        verticalLayout_17 = new QVBoxLayout(tab_3);
        verticalLayout_17->setSpacing(5);
        verticalLayout_17->setObjectName(QStringLiteral("verticalLayout_17"));
        verticalLayout_17->setContentsMargins(5, 5, 5, 5);
        upDistillers = new QTableWidget(tab_3);
        if (upDistillers->columnCount() < 2)
            upDistillers->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem139 = new QTableWidgetItem();
        upDistillers->setHorizontalHeaderItem(0, __qtablewidgetitem139);
        QTableWidgetItem *__qtablewidgetitem140 = new QTableWidgetItem();
        upDistillers->setHorizontalHeaderItem(1, __qtablewidgetitem140);
        upDistillers->setObjectName(QStringLiteral("upDistillers"));
        upDistillers->setTabKeyNavigation(true);
        upDistillers->setAlternatingRowColors(true);
        upDistillers->setSelectionMode(QAbstractItemView::ExtendedSelection);
        upDistillers->setSelectionBehavior(QAbstractItemView::SelectRows);
        upDistillers->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        upDistillers->horizontalHeader()->setStretchLastSection(true);

        verticalLayout_17->addWidget(upDistillers);

        urlTab->addTab(tab_3, icon21, QString());

        verticalLayout_11->addWidget(urlTab);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        label_99 = new QLabel(urlPolarizers);
        label_99->setObjectName(QStringLiteral("label_99"));

        horizontalLayout_13->addWidget(label_99);

        domain = new QLineEdit(urlPolarizers);
        domain->setObjectName(QStringLiteral("domain"));

        horizontalLayout_13->addWidget(domain);


        verticalLayout_11->addLayout(horizontalLayout_13);

        frame_3 = new QFrame(urlPolarizers);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        horizontalLayout_5 = new QHBoxLayout(frame_3);
        horizontalLayout_5->setSpacing(5);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(5, 5, 5, 5);
        downDist = new QCheckBox(frame_3);
        downDist->setObjectName(QStringLiteral("downDist"));
        sizePolicy6.setHeightForWidth(downDist->sizePolicy().hasHeightForWidth());
        downDist->setSizePolicy(sizePolicy6);
        downDist->setChecked(true);

        horizontalLayout_5->addWidget(downDist);

        sharedDist = new QCheckBox(frame_3);
        sharedDist->setObjectName(QStringLiteral("sharedDist"));
        sizePolicy6.setHeightForWidth(sharedDist->sizePolicy().hasHeightForWidth());
        sharedDist->setSizePolicy(sizePolicy6);
        sharedDist->setChecked(true);

        horizontalLayout_5->addWidget(sharedDist);

        upDist = new QCheckBox(frame_3);
        upDist->setObjectName(QStringLiteral("upDist"));
        sizePolicy6.setHeightForWidth(upDist->sizePolicy().hasHeightForWidth());
        upDist->setSizePolicy(sizePolicy6);
        upDist->setChecked(true);

        horizontalLayout_5->addWidget(upDist);

        addDistiller = new QPushButton(frame_3);
        addDistiller->setObjectName(QStringLiteral("addDistiller"));
        sizePolicy11.setHeightForWidth(addDistiller->sizePolicy().hasHeightForWidth());
        addDistiller->setSizePolicy(sizePolicy11);
        addDistiller->setStyleSheet(QLatin1String("QPushButton {\n"
" border: 2px solid gray;\n"
" background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                   stop: 0 #E0E0E0, stop: 1 #FFFFFF);\n"
" border-radius: 5px;\n"
" margin: 2px;\n"
" padding: 2px;\n"
" }\n"
"\n"
"\n"
"QPushButton:hover { \n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                   stop: 0 rgb(254,229,172), stop: 1 #FFFFFF);\n"
"background-position: top center; } \n"
"\n"
"QPushButton:pressed {\n"
"     background-color: darkgrey;\n"
"     border-style: inset;\n"
" }"));
        addDistiller->setIcon(icon4);

        horizontalLayout_5->addWidget(addDistiller);

        line = new QFrame(frame_3);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout_5->addWidget(line);

        deleteDistillers = new QPushButton(frame_3);
        deleteDistillers->setObjectName(QStringLiteral("deleteDistillers"));
        deleteDistillers->setStyleSheet(QLatin1String("QPushButton {\n"
" border: 2px solid gray;\n"
" background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                   stop: 0 #E0E0E0, stop: 1 #FFFFFF);\n"
" border-radius: 5px;\n"
" margin: 2px;\n"
" padding: 2px;\n"
" }\n"
"\n"
"\n"
"QPushButton:hover { \n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                   stop: 0 rgb(254,229,172), stop: 1 #FFFFFF);\n"
"background-position: top center; } \n"
"\n"
"QPushButton:pressed {\n"
"     background-color: darkgrey;\n"
"     border-style: inset;\n"
" }"));
        deleteDistillers->setIcon(icon25);

        horizontalLayout_5->addWidget(deleteDistillers);

        refreshDistillers = new QPushButton(frame_3);
        refreshDistillers->setObjectName(QStringLiteral("refreshDistillers"));
        refreshDistillers->setStyleSheet(QLatin1String("QPushButton {\n"
" border: 2px solid gray;\n"
" background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                   stop: 0 #E0E0E0, stop: 1 #FFFFFF);\n"
" border-radius: 5px;\n"
" margin: 2px;\n"
" padding: 2px;\n"
" }\n"
"\n"
"\n"
"QPushButton:hover { \n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                   stop: 0 rgb(254,229,172), stop: 1 #FFFFFF);\n"
"background-position: top center; } \n"
"\n"
"QPushButton:pressed {\n"
"     background-color: darkgrey;\n"
"     border-style: inset;\n"
" }"));
        refreshDistillers->setIcon(icon14);

        horizontalLayout_5->addWidget(refreshDistillers);


        verticalLayout_11->addWidget(frame_3);

        urlsVerticalSplitter->addWidget(urlPolarizers);

        verticalLayout_58->addWidget(urlsVerticalSplitter);

        scrollArea_10->setWidget(scrollAreaWidgetContents_10);

        verticalLayout_10->addWidget(scrollArea_10);

        tab->addTab(tab_cultivation, QString());
        tab_addkey = new QWidget();
        tab_addkey->setObjectName(QStringLiteral("tab_addkey"));
        verticalLayout_22 = new QVBoxLayout(tab_addkey);
        verticalLayout_22->setSpacing(5);
        verticalLayout_22->setObjectName(QStringLiteral("verticalLayout_22"));
        verticalLayout_22->setContentsMargins(5, 5, 5, 5);
        label_125 = new QLabel(tab_addkey);
        label_125->setObjectName(QStringLiteral("label_125"));
        label_125->setMinimumSize(QSize(0, 40));
        label_125->setFont(font);
        label_125->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:reflect, x1:0.023, y1:0.988636, x2:0.028, y2:0.011, stop:0 rgba(218, 232, 255, 255), stop:1 rgba(170, 85, 255, 255));\n"
"color: rgb(255, 255, 255);"));
        label_125->setIndent(5);

        verticalLayout_22->addWidget(label_125);

        line_13 = new QFrame(tab_addkey);
        line_13->setObjectName(QStringLiteral("line_13"));
        line_13->setFrameShape(QFrame::HLine);
        line_13->setFrameShadow(QFrame::Sunken);

        verticalLayout_22->addWidget(line_13);

        horizontalLayout_27 = new QHBoxLayout();
        horizontalLayout_27->setSpacing(3);
        horizontalLayout_27->setObjectName(QStringLiteral("horizontalLayout_27"));
        groupBox_addkey_3 = new QGroupBox(tab_addkey);
        groupBox_addkey_3->setObjectName(QStringLiteral("groupBox_addkey_3"));
        verticalLayout_24 = new QVBoxLayout(groupBox_addkey_3);
        verticalLayout_24->setSpacing(3);
        verticalLayout_24->setObjectName(QStringLiteral("verticalLayout_24"));
        verticalLayout_24->setContentsMargins(3, 3, 3, 3);
        verticalLayout_75 = new QVBoxLayout();
        verticalLayout_75->setSpacing(0);
        verticalLayout_75->setObjectName(QStringLiteral("verticalLayout_75"));
        verticalLayout_75->setContentsMargins(-1, 0, -1, -1);
        horizontalLayout_38 = new QHBoxLayout();
        horizontalLayout_38->setObjectName(QStringLiteral("horizontalLayout_38"));
        horizontalLayout_38->setContentsMargins(-1, 0, -1, 0);
        toolButtonCopyToClipboard = new QPushButton(groupBox_addkey_3);
        toolButtonCopyToClipboard->setObjectName(QStringLiteral("toolButtonCopyToClipboard"));
        toolButtonCopyToClipboard->setStyleSheet(QLatin1String("QPushButton {\n"
" border: 2px solid gray;\n"
" background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                   stop: 0 #E0E0E0, stop: 1 #FFFFFF);\n"
" border-radius: 5px;\n"
" margin: 2px;\n"
" padding: 2px;\n"
" }\n"
"\n"
"\n"
"\n"
"QPushButton#pushButtonCopytoClipboard_All:hover { \n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                   stop: 0 rgb(254,229,172), stop: 1 #FFFFFF);\n"
"background-position: top center; } \n"
"\n"
"QPushButton#pushButtonCopytoClipboard_All:pressed {\n"
"     background-color: darkgrey;\n"
"     border-style: inset;\n"
" }\n"
""));
        QIcon icon38;
        icon38.addFile(QStringLiteral(":/nuvola/key.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButtonCopyToClipboard->setIcon(icon38);
        toolButtonCopyToClipboard->setIconSize(QSize(40, 40));

        horizontalLayout_38->addWidget(toolButtonCopyToClipboard);


        verticalLayout_75->addLayout(horizontalLayout_38);


        verticalLayout_24->addLayout(verticalLayout_75);

        verticalSpacer_13 = new QSpacerItem(1, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout_24->addItem(verticalSpacer_13);

        horizontalLayout_62 = new QHBoxLayout();
        horizontalLayout_62->setObjectName(QStringLiteral("horizontalLayout_62"));
        horizontalSpacer_21 = new QSpacerItem(1, 1, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_62->addItem(horizontalSpacer_21);

        addFriendEmail = new QRadioButton(groupBox_addkey_3);
        addFriendEmail->setObjectName(QStringLiteral("addFriendEmail"));
        addFriendEmail->setIcon(icon23);

        horizontalLayout_62->addWidget(addFriendEmail);

        horizontalSpacer_31 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_62->addItem(horizontalSpacer_31);

        addFriendPublicKeyRadio = new QRadioButton(groupBox_addkey_3);
        addFriendPublicKeyRadio->setObjectName(QStringLiteral("addFriendPublicKeyRadio"));
        addFriendPublicKeyRadio->setIcon(icon38);
        addFriendPublicKeyRadio->setChecked(true);

        horizontalLayout_62->addWidget(addFriendPublicKeyRadio);

        horizontalSpacer_23 = new QSpacerItem(1, 1, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_62->addItem(horizontalSpacer_23);

        horizontalSpacer_24 = new QSpacerItem(1, 1, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_62->addItem(horizontalSpacer_24);


        verticalLayout_24->addLayout(horizontalLayout_62);

        friendInformation = new QTextEdit(groupBox_addkey_3);
        friendInformation->setObjectName(QStringLiteral("friendInformation"));
        friendInformation->setAutoFillBackground(false);
        friendInformation->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0.968, y1:0.932, x2:0.513, y2:0.5, stop:0 rgba(183, 235, 255, 255), stop:1 rgba(255, 255, 255, 255)); "));
        friendInformation->setFrameShadow(QFrame::Sunken);
        friendInformation->setLineWidth(1);
        friendInformation->setTabChangesFocus(true);
        friendInformation->setOverwriteMode(false);

        verticalLayout_24->addWidget(friendInformation);

        horizontalLayout_64 = new QHBoxLayout();
        horizontalLayout_64->setObjectName(QStringLiteral("horizontalLayout_64"));
        horizontalLayout_64->setContentsMargins(0, 3, 3, -1);
        horizontalSpacer_25 = new QSpacerItem(1, 1, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_64->addItem(horizontalSpacer_25);

        addFriend = new QPushButton(groupBox_addkey_3);
        addFriend->setObjectName(QStringLiteral("addFriend"));
        addFriend->setStyleSheet(QLatin1String("QPushButton {\n"
" border: 2px solid gray;\n"
" background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                   stop: 0 #E0E0E0, stop: 1 #FFFFFF);\n"
" border-radius: 5px;\n"
" margin: 2px;\n"
" padding: 2px;\n"
" }\n"
"\n"
"QPushButton:hover { \n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                   stop: 0 rgb(254,229,172), stop: 1 #FFFFFF);\n"
"background-position: top center; } \n"
"\n"
"QPushButton:pressed {\n"
"     background-color: darkgrey;\n"
"     border-style: inset;\n"
" }"));
        addFriend->setIcon(icon4);

        horizontalLayout_64->addWidget(addFriend);

        horizontalSpacer_32 = new QSpacerItem(1, 1, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_64->addItem(horizontalSpacer_32);

        clearFriend = new QPushButton(groupBox_addkey_3);
        clearFriend->setObjectName(QStringLiteral("clearFriend"));
        clearFriend->setStyleSheet(QLatin1String("QPushButton {\n"
" border: 2px solid gray;\n"
" background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                   stop: 0 #E0E0E0, stop: 1 #FFFFFF);\n"
" border-radius: 5px;\n"
" margin: 2px;\n"
" padding: 2px;\n"
" }\n"
"\n"
"\n"
"\n"
"QPushButton:hover { \n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                   stop: 0 rgb(254,229,172), stop: 1 #FFFFFF);\n"
"background-position: top center; } \n"
"\n"
"QPushButton:pressed {\n"
"     background-color: darkgrey;\n"
"     border-style: inset;\n"
" }"));
        clearFriend->setIcon(icon6);

        horizontalLayout_64->addWidget(clearFriend);


        verticalLayout_24->addLayout(horizontalLayout_64);


        horizontalLayout_27->addWidget(groupBox_addkey_3);


        verticalLayout_22->addLayout(horizontalLayout_27);

        QIcon icon39;
        icon39.addFile(QStringLiteral(":/nuvola/key_t.png"), QSize(), QIcon::Normal, QIcon::Off);
        tab->addTab(tab_addkey, icon39, QString());
        tab_login = new QWidget();
        tab_login->setObjectName(QStringLiteral("tab_login"));
        tab_login->setStyleSheet(QLatin1String("QWidget#tab_login \n"
"{\n"
"   border-image: url(:/Logo/background.png) 0 0 0 0 stretch stretch;\n"
"   border-width: 0px;\n"
"}\n"
""));
        verticalLayout_60 = new QVBoxLayout(tab_login);
        verticalLayout_60->setSpacing(5);
        verticalLayout_60->setObjectName(QStringLiteral("verticalLayout_60"));
        verticalLayout_60->setContentsMargins(5, 5, 5, 5);
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalSpacer_9 = new QSpacerItem(1, 1, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_9);

        logo = new QLabel(tab_login);
        logo->setObjectName(QStringLiteral("logo"));
        logo->setPixmap(QPixmap(QString::fromUtf8(":/Logo/goldbug-neuland.png")));
        logo->setScaledContents(false);
        logo->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(logo);

        label_31 = new QLabel(tab_login);
        label_31->setObjectName(QStringLiteral("label_31"));
        QFont font4;
        font4.setPointSize(12);
        font4.setItalic(true);
        label_31->setFont(font4);
        label_31->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label_31);

        label_100 = new QLabel(tab_login);
        label_100->setObjectName(QStringLiteral("label_100"));
        label_100->setAlignment(Qt::AlignCenter);
        label_100->setOpenExternalLinks(true);

        verticalLayout_5->addWidget(label_100);

        verticalSpacer_14 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_14);

        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setObjectName(QStringLiteral("horizontalLayout_22"));
        horizontalLayout_22->setContentsMargins(-1, 0, -1, -1);
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_22->addItem(horizontalSpacer_6);

        question_rb_authenticate = new QRadioButton(tab_login);
        question_rb_authenticate->setObjectName(QStringLiteral("question_rb_authenticate"));
        sizePolicy6.setHeightForWidth(question_rb_authenticate->sizePolicy().hasHeightForWidth());
        question_rb_authenticate->setSizePolicy(sizePolicy6);
        question_rb_authenticate->setLayoutDirection(Qt::RightToLeft);
        question_rb_authenticate->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout_22->addWidget(question_rb_authenticate);

        label_102 = new QLabel(tab_login);
        label_102->setObjectName(QStringLiteral("label_102"));
        sizePolicy10.setHeightForWidth(label_102->sizePolicy().hasHeightForWidth());
        label_102->setSizePolicy(sizePolicy10);

        horizontalLayout_22->addWidget(label_102);

        passphrase_rb_authenticate = new QRadioButton(tab_login);
        passphrase_rb_authenticate->setObjectName(QStringLiteral("passphrase_rb_authenticate"));
        sizePolicy6.setHeightForWidth(passphrase_rb_authenticate->sizePolicy().hasHeightForWidth());
        passphrase_rb_authenticate->setSizePolicy(sizePolicy6);
        passphrase_rb_authenticate->setLayoutDirection(Qt::LeftToRight);
        passphrase_rb_authenticate->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);"));
        passphrase_rb_authenticate->setChecked(true);

        horizontalLayout_22->addWidget(passphrase_rb_authenticate);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_22->addItem(horizontalSpacer_14);


        verticalLayout_5->addLayout(horizontalLayout_22);

        horizontalLayout_32 = new QHBoxLayout();
        horizontalLayout_32->setObjectName(QStringLiteral("horizontalLayout_32"));
        horizontalLayout_32->setContentsMargins(-1, 0, -1, -1);
        passphraseLabel = new QLabel(tab_login);
        passphraseLabel->setObjectName(QStringLiteral("passphraseLabel"));
        passphraseLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_32->addWidget(passphraseLabel);


        verticalLayout_5->addLayout(horizontalLayout_32);

        horizontalLayout_25 = new QHBoxLayout();
        horizontalLayout_25->setObjectName(QStringLiteral("horizontalLayout_25"));
        horizontalLayout_25->setContentsMargins(-1, 0, -1, -1);
        horizontalSpacer_15 = new QSpacerItem(1, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_25->addItem(horizontalSpacer_15);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout->setHorizontalSpacing(7);
        formLayout->setVerticalSpacing(2);
        formLayout->setContentsMargins(-1, 0, -1, -1);
        label_103gb = new QLabel(tab_login);
        label_103gb->setObjectName(QStringLiteral("label_103gb"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_103gb);

        question_authenticate = new spoton_lineedit(tab_login);
        question_authenticate->setObjectName(QStringLiteral("question_authenticate"));
        sizePolicy1.setHeightForWidth(question_authenticate->sizePolicy().hasHeightForWidth());
        question_authenticate->setSizePolicy(sizePolicy1);
        question_authenticate->setStyleSheet(QLatin1String("QLineEdit#question_authenticate {\n"
"background-color: qlineargradient(spread:pad, x1:0.968, y1:0.932, x2:0.513, y2:0.5, stop:0 rgba(183, 235, 255, 255), stop:1 rgba(255, 255, 255, 255)); \n"
"     border-style: outset;\n"
"     border-width: 2px;\n"
"     border-radius: 10px;\n"
"     border-color: grey;\n"
"     min-width: 10em;\n"
"     padding: 2px;\n"
" }\n"
""));

        formLayout->setWidget(2, QFormLayout::FieldRole, question_authenticate);

        label_124gb = new QLabel(tab_login);
        label_124gb->setObjectName(QStringLiteral("label_124gb"));

        formLayout->setWidget(7, QFormLayout::LabelRole, label_124gb);

        passphrase = new spoton_lineedit(tab_login);
        passphrase->setObjectName(QStringLiteral("passphrase"));
        passphrase->setStyleSheet(QLatin1String("QLineEdit#passphrase {\n"
"background-color: qlineargradient(spread:pad, x1:0.968, y1:0.932, x2:0.513, y2:0.5, stop:0 rgba(183, 235, 255, 255), stop:1 rgba(255, 255, 255, 255)); \n"
"     border-style: outset;\n"
"     border-width: 2px;\n"
"     border-radius: 10px;\n"
"     border-color: grey;\n"
"     min-width: 10em;\n"
"     padding: 2px;\n"
" }\n"
""));
        passphrase->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(7, QFormLayout::FieldRole, passphrase);

        horizontalLayout_75 = new QHBoxLayout();
        horizontalLayout_75->setObjectName(QStringLiteral("horizontalLayout_75"));
        horizontalLayout_75->setContentsMargins(-1, 0, 0, -1);
        label_122gb = new QLabel(tab_login);
        label_122gb->setObjectName(QStringLiteral("label_122gb"));

        horizontalLayout_75->addWidget(label_122gb);


        formLayout->setLayout(6, QFormLayout::LabelRole, horizontalLayout_75);

        answer_authenticate = new spoton_lineedit(tab_login);
        answer_authenticate->setObjectName(QStringLiteral("answer_authenticate"));
        answer_authenticate->setStyleSheet(QLatin1String("QLineEdit#answer_authenticate {\n"
"background-color: qlineargradient(spread:pad, x1:0.968, y1:0.932, x2:0.513, y2:0.5, stop:0 rgba(183, 235, 255, 255), stop:1 rgba(255, 255, 255, 255)); \n"
"     border-style: outset;\n"
"     border-width: 2px;\n"
"     border-radius: 10px;\n"
"     border-color: grey;\n"
"     min-width: 10em;\n"
"     padding: 2px;\n"
" }\n"
""));
        answer_authenticate->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(6, QFormLayout::FieldRole, answer_authenticate);

        label_103 = new QLabel(tab_login);
        label_103->setObjectName(QStringLiteral("label_103"));
        QFont font5;
        font5.setItalic(true);
        label_103->setFont(font5);
        label_103->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(8, QFormLayout::SpanningRole, label_103);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        formLayout->setItem(9, QFormLayout::SpanningRole, horizontalSpacer_3);


        horizontalLayout_25->addLayout(formLayout);

        horizontalSpacer_19 = new QSpacerItem(1, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_25->addItem(horizontalSpacer_19);


        verticalLayout_5->addLayout(horizontalLayout_25);

        horizontalLayout_42 = new QHBoxLayout();
        horizontalLayout_42->setObjectName(QStringLiteral("horizontalLayout_42"));
        horizontalLayout_42->setContentsMargins(-1, 0, -1, -1);
        horizontalSpacer_9 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_42->addItem(horizontalSpacer_9);

        passphraseButton = new QPushButton(tab_login);
        passphraseButton->setObjectName(QStringLiteral("passphraseButton"));
        sizePolicy1.setHeightForWidth(passphraseButton->sizePolicy().hasHeightForWidth());
        passphraseButton->setSizePolicy(sizePolicy1);
        passphraseButton->setFont(font);
        passphraseButton->setStyleSheet(QLatin1String("QPushButton {\n"
"border: 2px solid gray;\n"
"background-color: qlineargradient(spread:reflect, x1:0.023, y1:0.988636, x2:0.028, y2:0.011, stop:0 rgba(218, 232, 255, 255), stop:1 rgba(170, 85, 255, 255));\n"
"color: rgb(255, 255, 255);\n"
"margin: 2px;\n"
"border-style: outset;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"border-color: grey;\n"
"min-width: 10em;\n"
"padding: 2px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"border: 2px solid gray;\n"
"color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);\n"
"margin: 2px;\n"
"border-style: outset;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"border-color: black;\n"
"min-width: 10em;\n"
"padding: 2px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background-color: black;\n"
"color: rgb(255, 255, 255);\n"
"border-style: inset;\n"
"}"));
        passphraseButton->setIcon(icon3);
        passphraseButton->setIconSize(QSize(40, 40));

        horizontalLayout_42->addWidget(passphraseButton);

        horizontalSpacer_10 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_42->addItem(horizontalSpacer_10);


        verticalLayout_5->addLayout(horizontalLayout_42);

        verticalSpacer_2 = new QSpacerItem(1, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_2);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setSpacing(0);
        horizontalLayout_17->setObjectName(QStringLiteral("horizontalLayout_17"));
        horizontalLayout_17->setContentsMargins(-1, 0, -1, -1);
        horizontalSpacer_16 = new QSpacerItem(1, 1, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_17->addItem(horizontalSpacer_16);

        version = new QLabel(tab_login);
        version->setObjectName(QStringLiteral("version"));
        version->setFont(font2);
        version->setAlignment(Qt::AlignCenter);
        version->setOpenExternalLinks(true);

        horizontalLayout_17->addWidget(version);

        horizontalSpacer_33 = new QSpacerItem(1, 1, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_17->addItem(horizontalSpacer_33);


        verticalLayout_5->addLayout(horizontalLayout_17);

        buildInformation = new QLabel(tab_login);
        buildInformation->setObjectName(QStringLiteral("buildInformation"));
        buildInformation->setStyleSheet(QStringLiteral(" color:#666666;"));
        buildInformation->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(buildInformation);


        verticalLayout_60->addLayout(verticalLayout_5);

        QIcon icon40;
        icon40.addFile(QStringLiteral(":/everaldo/goldbug_t.png"), QSize(), QIcon::Normal, QIcon::Off);
        tab->addTab(tab_login, icon40, QString());

        verticalLayout_3->addWidget(tab);

        spoton_mainwindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(spoton_mainwindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        spoton_mainwindow->setStatusBar(statusbar);
        menubar = new QMenuBar(spoton_mainwindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 660, 19));
        menu_File = new QMenu(menubar);
        menu_File->setObjectName(QStringLiteral("menu_File"));
        menu_View = new QMenu(menubar);
        menu_View->setObjectName(QStringLiteral("menu_View"));
        menu_View->setTearOffEnabled(true);
        menu_Pages = new QMenu(menu_View);
        menu_Pages->setObjectName(QStringLiteral("menu_Pages"));
        menu_Tools = new QMenu(menubar);
        menu_Tools->setObjectName(QStringLiteral("menu_Tools"));
        menu_Tools->setTearOffEnabled(true);
        menu_Edit = new QMenu(menubar);
        menu_Edit->setObjectName(QStringLiteral("menu_Edit"));
        spoton_mainwindow->setMenuBar(menubar);
#ifndef QT_NO_SHORTCUT
        label_32->setBuddy(buzzName);
        label_82->setBuddy(commonBuzzChannels);
        label_33->setBuddy(channel);
        label_72->setBuddy(demagnetize);
        label_44->setBuddy(buzzIterationCount);
        label_36->setBuddy(channelType);
        label_61->setBuddy(buzzHashKey);
        label_37->setBuddy(channelSalt);
        label_62->setBuddy(buzzHashType);
        label_49->setBuddy(favorites);
        label_5->setBuddy(nodeName);
        label_28->setBuddy(days);
        label_75->setBuddy(institutionName);
        label_77->setBuddy(institutionPostalAddress);
        label_79->setBuddy(institutionNameType);
        label_80->setBuddy(institutionPostalAddressType);
        label_25->setBuddy(outgoingSubject);
        label_6->setBuddy(goldbug);
        label_41->setBuddy(emailName);
        label_4->setBuddy(outgoingMessage);
        label_94->setBuddy(attachment);
        label_10->setBuddy(emailParticipants);
        label_38->setBuddy(listenersEchoMode);
        listenerScopeIdLabel->setBuddy(listenerScopeId);
        label_122->setBuddy(days_valid);
        label_64->setBuddy(listenersSslControlString);
        label_47->setBuddy(accountName);
        label_48->setBuddy(accountPassword);
        label_83->setBuddy(ae_token);
        label_84->setBuddy(ae_e_type);
        label_85->setBuddy(ae_h_type);
        label_24->setBuddy(neighborIP);
        label_13->setBuddy(neighborPort);
        neighborScopeIdLabel->setBuddy(neighborScopeId);
        label_66->setBuddy(neighborTransport);
        label_39->setBuddy(neighborsEchoMode);
        sslKeySizeLabel->setBuddy(neighborKeySize);
        label_78->setBuddy(neighborsSslControlString);
        label_7->setBuddy(proxyHostname);
        label_19->setBuddy(proxyUsername);
        label_3->setBuddy(proxyType);
        label_20->setBuddy(proxyPassword);
        label_8->setBuddy(proxyPort);
        label_132->setBuddy(commonUrlPassphrase);
        label_133->setBuddy(commonUrlPin);
        label_138->setBuddy(commonUrlCipher);
        label_139->setBuddy(commonUrlHash);
        label_140->setBuddy(commonUrlIterationCount);
        label_107->setBuddy(urlIniPath);
        label_109->setBuddy(urlCipher);
        label_110->setBuddy(urlHash);
        label_111->setBuddy(urlIteration);
        label_113->setBuddy(urlPassphrase);
        label_116->setBuddy(urlIniHash);
        label_112->setBuddy(urlSalt);
        label_29->setBuddy(guiExternalIpFetch);
        label_60->setBuddy(guiSecureMemoryPool);
        label_40->setBuddy(geoipPath4);
        label_81->setBuddy(geoipPath6);
        label_43->setBuddy(sslControlString);
        label_67->setBuddy(kernelExternalIpFetch);
        label_68->setBuddy(kernelSecureMemoryPool);
        kernelPathLabel->setBuddy(kernelPath);
        label_42->setBuddy(kernelCipherType);
        label_87->setBuddy(kernelHashType);
        label_73->setBuddy(cost);
        label_124->setBuddy(congestionAlgorithm);
        label_34->setBuddy(kernelKeySize);
        label_74->setBuddy(username);
        label_55->setBuddy(passphrase1);
        label_56->setBuddy(passphrase2);
        label_97->setBuddy(question);
        label_98->setBuddy(answer);
        label->setBuddy(cipherType);
        label_14->setBuddy(hashType);
        label_15->setBuddy(iterationCount);
        label_16->setBuddy(saltLength);
        label_92->setBuddy(signatureKeySize);
        label_46->setBuddy(signatureKeyType);
        label_69->setBuddy(keys);
        label_45->setBuddy(encryptionKeyType);
        label_52->setBuddy(etpCipherType);
        label_51->setBuddy(etpMacKey);
        label_50->setBuddy(etpEncryptionKey);
        label_57->setBuddy(etpHashType);
        label_63->setBuddy(destination);
        label_59->setBuddy(etpMaxMosaicSize);
        label_53->setBuddy(transmittedFile);
        label_54->setBuddy(pulseSize);
        label_104->setBuddy(urlDistributionModel);
        label_22->setBuddy(urlName);
        label_99->setBuddy(domain);
        label_103gb->setBuddy(question_authenticate);
        label_124gb->setBuddy(passphrase);
        label_122gb->setBuddy(answer_authenticate);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(tab, scrollArea_5);
        QWidget::setTabOrder(scrollArea_5, buzzName);
        QWidget::setTabOrder(buzzName, saveBuzzName);
        QWidget::setTabOrder(saveBuzzName, commonBuzzChannels);
        QWidget::setTabOrder(commonBuzzChannels, buzz_details);
        QWidget::setTabOrder(buzz_details, channel);
        QWidget::setTabOrder(channel, demagnetize);
        QWidget::setTabOrder(demagnetize, buzzIterationCount);
        QWidget::setTabOrder(buzzIterationCount, channelType);
        QWidget::setTabOrder(channelType, buzzHashKey);
        QWidget::setTabOrder(buzzHashKey, channelSalt);
        QWidget::setTabOrder(channelSalt, buzzHashType);
        QWidget::setTabOrder(buzzHashType, buzzActions);
        QWidget::setTabOrder(buzzActions, favorites);
        QWidget::setTabOrder(favorites, buzzTools);
        QWidget::setTabOrder(buzzTools, join);
        QWidget::setTabOrder(join, buzzTab);
        QWidget::setTabOrder(buzzTab, messages);
        QWidget::setTabOrder(messages, message);
        QWidget::setTabOrder(message, clearMessages);
        QWidget::setTabOrder(clearMessages, status);
        QWidget::setTabOrder(status, sendMessage);
        QWidget::setTabOrder(sendMessage, custom);
        QWidget::setTabOrder(custom, participants);
        QWidget::setTabOrder(participants, nodeName);
        QWidget::setTabOrder(nodeName, saveNodeName);
        QWidget::setTabOrder(saveNodeName, hideOfflineParticipants);
        QWidget::setTabOrder(hideOfflineParticipants, chatActionMenu);
        QWidget::setTabOrder(chatActionMenu, scrollArea_6);
        QWidget::setTabOrder(scrollArea_6, refreshMail);
        QWidget::setTabOrder(refreshMail, retrieveMail);
        QWidget::setTabOrder(retrieveMail, emptyTrash);
        QWidget::setTabOrder(emptyTrash, mailTab);
        QWidget::setTabOrder(mailTab, folder);
        QWidget::setTabOrder(folder, deleteEmail);
        QWidget::setTabOrder(deleteEmail, reply);
        QWidget::setTabOrder(reply, resend);
        QWidget::setTabOrder(resend, saveAttachment);
        QWidget::setTabOrder(saveAttachment, mail);
        QWidget::setTabOrder(mail, mailMessage);
        QWidget::setTabOrder(mailMessage, days);
        QWidget::setTabOrder(days, postofficeCheckBox);
        QWidget::setTabOrder(postofficeCheckBox, postoffice);
        QWidget::setTabOrder(postoffice, institutions);
        QWidget::setTabOrder(institutions, copyInstitution);
        QWidget::setTabOrder(copyInstitution, deleteInstitution);
        QWidget::setTabOrder(deleteInstitution, institutionName);
        QWidget::setTabOrder(institutionName, institutionNameType);
        QWidget::setTabOrder(institutionNameType, institutionPostalAddress);
        QWidget::setTabOrder(institutionPostalAddress, institutionPostalAddressType);
        QWidget::setTabOrder(institutionPostalAddressType, addInstitutionCheckBox);
        QWidget::setTabOrder(addInstitutionCheckBox, addInstitutionLineEdit);
        QWidget::setTabOrder(addInstitutionLineEdit, addInstitution);
        QWidget::setTabOrder(addInstitution, emailName);
        QWidget::setTabOrder(emailName, emailNameEditable);
        QWidget::setTabOrder(emailNameEditable, reloadEmailNames);
        QWidget::setTabOrder(reloadEmailNames, saveEmailName);
        QWidget::setTabOrder(saveEmailName, clearOutgoing);
        QWidget::setTabOrder(clearOutgoing, emailWriteActionMenu);
        QWidget::setTabOrder(emailWriteActionMenu, emailParticipants);
        QWidget::setTabOrder(emailParticipants, outgoingSubject);
        QWidget::setTabOrder(outgoingSubject, richtext);
        QWidget::setTabOrder(richtext, outgoingMessage);
        QWidget::setTabOrder(outgoingMessage, attachment);
        QWidget::setTabOrder(attachment, selectAttachment);
        QWidget::setTabOrder(selectAttachment, goldbug);
        QWidget::setTabOrder(goldbug, email_fs_gb);
        QWidget::setTabOrder(email_fs_gb, saveCopy);
        QWidget::setTabOrder(saveCopy, sign_this_email);
        QWidget::setTabOrder(sign_this_email, sendMail);
        QWidget::setTabOrder(sendMail, scrollArea_7);
        QWidget::setTabOrder(scrollArea_7, listeners);
        QWidget::setTabOrder(listeners, listenersEchoMode);
        QWidget::setTabOrder(listenersEchoMode, listenerShareAddress);
        QWidget::setTabOrder(listenerShareAddress, listenersActionMenu);
        QWidget::setTabOrder(listenersActionMenu, sslListener);
        QWidget::setTabOrder(sslListener, listenerKeySize);
        QWidget::setTabOrder(listenerKeySize, permanentCertificate);
        QWidget::setTabOrder(permanentCertificate, recordIPAddress);
        QWidget::setTabOrder(recordIPAddress, ipv4Listener);
        QWidget::setTabOrder(ipv4Listener, ipv6Listener);
        QWidget::setTabOrder(ipv6Listener, listenerIPCombo);
        QWidget::setTabOrder(listenerIPCombo, listenerIP);
        QWidget::setTabOrder(listenerIP, listenerScopeId);
        QWidget::setTabOrder(listenerScopeId, listenerPort);
        QWidget::setTabOrder(listenerPort, listenerTransport);
        QWidget::setTabOrder(listenerTransport, addListener);
        QWidget::setTabOrder(addListener, days_valid);
        QWidget::setTabOrder(days_valid, listenersSslControlString);
        QWidget::setTabOrder(listenersSslControlString, listenerOrientation);
        QWidget::setTabOrder(listenerOrientation, accounts);
        QWidget::setTabOrder(accounts, deleteAccount);
        QWidget::setTabOrder(deleteAccount, ota);
        QWidget::setTabOrder(ota, accountName);
        QWidget::setTabOrder(accountName, accountPassword);
        QWidget::setTabOrder(accountPassword, addAccount);
        QWidget::setTabOrder(addAccount, acceptedIPList);
        QWidget::setTabOrder(acceptedIPList, acceptedIP);
        QWidget::setTabOrder(acceptedIP, addAcceptedIP);
        QWidget::setTabOrder(addAcceptedIP, deleteAcceptedIP);
        QWidget::setTabOrder(deleteAcceptedIP, ae_tokens);
        QWidget::setTabOrder(ae_tokens, ae_token);
        QWidget::setTabOrder(ae_token, ae_e_type);
        QWidget::setTabOrder(ae_e_type, ae_h_type);
        QWidget::setTabOrder(ae_h_type, ae_listeners_magnet);
        QWidget::setTabOrder(ae_listeners_magnet, addAEToken);
        QWidget::setTabOrder(addAEToken, deleteAEToken);
        QWidget::setTabOrder(deleteAEToken, motd);
        QWidget::setTabOrder(motd, saveMOTD);
        QWidget::setTabOrder(saveMOTD, scrollArea_8);
        QWidget::setTabOrder(scrollArea_8, neighborsActionMenu);
        QWidget::setTabOrder(neighborsActionMenu, shareBuzzMagnet);
        QWidget::setTabOrder(shareBuzzMagnet, neighbors);
        QWidget::setTabOrder(neighbors, neighborSummary);
        QWidget::setTabOrder(neighborSummary, neighborIP);
        QWidget::setTabOrder(neighborIP, neighborPort);
        QWidget::setTabOrder(neighborPort, ipv4Neighbor);
        QWidget::setTabOrder(ipv4Neighbor, neighborScopeId);
        QWidget::setTabOrder(neighborScopeId, ipv6Neighbor);
        QWidget::setTabOrder(ipv6Neighbor, neighborTransport);
        QWidget::setTabOrder(neighborTransport, neighborOrientation);
        QWidget::setTabOrder(neighborOrientation, dynamicdns);
        QWidget::setTabOrder(dynamicdns, neighborsEchoMode);
        QWidget::setTabOrder(neighborsEchoMode, addException);
        QWidget::setTabOrder(addException, requireSsl);
        QWidget::setTabOrder(requireSsl, neighborKeySize);
        QWidget::setTabOrder(neighborKeySize, neighborsSslControlString);
        QWidget::setTabOrder(neighborsSslControlString, proxy);
        QWidget::setTabOrder(proxy, proxyType);
        QWidget::setTabOrder(proxyType, proxyHostname);
        QWidget::setTabOrder(proxyHostname, proxyPort);
        QWidget::setTabOrder(proxyPort, proxyUsername);
        QWidget::setTabOrder(proxyUsername, proxyPassword);
        QWidget::setTabOrder(proxyPassword, addNeighbor);
        QWidget::setTabOrder(addNeighbor, scrollArea_9);
        QWidget::setTabOrder(scrollArea_9, showUrlSettings);
        QWidget::setTabOrder(showUrlSettings, urlSettings);
        QWidget::setTabOrder(urlSettings, urls_db_type);
        QWidget::setTabOrder(urls_db_type, postgresqlConnect);
        QWidget::setTabOrder(postgresqlConnect, prepareUrlDatabases);
        QWidget::setTabOrder(prepareUrlDatabases, correctUrlDatabases);
        QWidget::setTabOrder(correctUrlDatabases, deleteAllUrls);
        QWidget::setTabOrder(deleteAllUrls, commonUrlPassphrase);
        QWidget::setTabOrder(commonUrlPassphrase, commonUrlPin);
        QWidget::setTabOrder(commonUrlPin, saveCommonUrlCredentials);
        QWidget::setTabOrder(saveCommonUrlCredentials, commonUrlCipher);
        QWidget::setTabOrder(commonUrlCipher, commonUrlHash);
        QWidget::setTabOrder(commonUrlHash, commonUrlIterationCount);
        QWidget::setTabOrder(commonUrlIterationCount, urlIniPath);
        QWidget::setTabOrder(urlIniPath, selectUrlIni);
        QWidget::setTabOrder(selectUrlIni, reloadIni);
        QWidget::setTabOrder(reloadIni, urlCipher);
        QWidget::setTabOrder(urlCipher, urlHash);
        QWidget::setTabOrder(urlHash, urlIteration);
        QWidget::setTabOrder(urlIteration, urlPassphrase);
        QWidget::setTabOrder(urlPassphrase, urlIniHash);
        QWidget::setTabOrder(urlIniHash, urlSalt);
        QWidget::setTabOrder(urlSalt, verify);
        QWidget::setTabOrder(verify, saveUrlCredentials);
        QWidget::setTabOrder(saveUrlCredentials, importUrls);
        QWidget::setTabOrder(importUrls, search);
        QWidget::setTabOrder(search, discover);
        QWidget::setTabOrder(discover, searchfor);
        QWidget::setTabOrder(searchfor, urls);
        QWidget::setTabOrder(urls, scrollArea);
        QWidget::setTabOrder(scrollArea, guiExternalIpFetch);
        QWidget::setTabOrder(guiExternalIpFetch, guiSecureMemoryPool);
        QWidget::setTabOrder(guiSecureMemoryPool, geoipPath4);
        QWidget::setTabOrder(geoipPath4, selectGeoIP4);
        QWidget::setTabOrder(selectGeoIP4, geoipPath6);
        QWidget::setTabOrder(geoipPath6, selectGeoIP6);
        QWidget::setTabOrder(selectGeoIP6, sslControlString);
        QWidget::setTabOrder(sslControlString, saveSslControlString);
        QWidget::setTabOrder(saveSslControlString, testSslControlString);
        QWidget::setTabOrder(testSslControlString, kernelExternalIpFetch);
        QWidget::setTabOrder(kernelExternalIpFetch, kernelSecureMemoryPool);
        QWidget::setTabOrder(kernelSecureMemoryPool, kernelPath);
        QWidget::setTabOrder(kernelPath, selectKernelPath);
        QWidget::setTabOrder(selectKernelPath, activateKernel);
        QWidget::setTabOrder(activateKernel, pid);
        QWidget::setTabOrder(pid, deactivateKernel);
        QWidget::setTabOrder(deactivateKernel, kernelCipherType);
        QWidget::setTabOrder(kernelCipherType, kernelHashType);
        QWidget::setTabOrder(kernelHashType, cost);
        QWidget::setTabOrder(cost, congestionAlgorithm);
        QWidget::setTabOrder(congestionAlgorithm, secondary_storage);
        QWidget::setTabOrder(secondary_storage, kernelLogEvents);
        QWidget::setTabOrder(kernelLogEvents, kernelKeySize);
        QWidget::setTabOrder(kernelKeySize, username);
        QWidget::setTabOrder(username, cipherType);
        QWidget::setTabOrder(cipherType, hashType);
        QWidget::setTabOrder(hashType, iterationCount);
        QWidget::setTabOrder(iterationCount, saltLength);
        QWidget::setTabOrder(saltLength, passphrase_rb);
        QWidget::setTabOrder(passphrase_rb, passphrase1);
        QWidget::setTabOrder(passphrase1, passphrase2);
        QWidget::setTabOrder(passphrase2, question_rb);
        QWidget::setTabOrder(question_rb, question);
        QWidget::setTabOrder(question, answer);
        QWidget::setTabOrder(answer, setPassphrase);
        QWidget::setTabOrder(setPassphrase, personal_public_keys);
        QWidget::setTabOrder(personal_public_keys, newKeys);
        QWidget::setTabOrder(newKeys, encryptionKeySize);
        QWidget::setTabOrder(encryptionKeySize, encryptionKeyType);
        QWidget::setTabOrder(encryptionKeyType, signatureKeySize);
        QWidget::setTabOrder(signatureKeySize, signatureKeyType);
        QWidget::setTabOrder(signatureKeyType, keys);
        QWidget::setTabOrder(keys, regenerate);
        QWidget::setTabOrder(regenerate, delete_key);
        QWidget::setTabOrder(delete_key, showStatistics);
        QWidget::setTabOrder(showStatistics, statistics);
        QWidget::setTabOrder(statistics, scrollArea_4);
        QWidget::setTabOrder(scrollArea_4, etpTab);
        QWidget::setTabOrder(etpTab, magnetsActionMenu);
        QWidget::setTabOrder(magnetsActionMenu, etpMagnets);
        QWidget::setTabOrder(etpMagnets, magnetRadio);
        QWidget::setTabOrder(magnetRadio, etpMagnet);
        QWidget::setTabOrder(etpMagnet, pairRadio);
        QWidget::setTabOrder(pairRadio, generate);
        QWidget::setTabOrder(generate, etpEncryptionKey);
        QWidget::setTabOrder(etpEncryptionKey, etpCipherType);
        QWidget::setTabOrder(etpCipherType, etpMacKey);
        QWidget::setTabOrder(etpMacKey, etpHashType);
        QWidget::setTabOrder(etpHashType, addMagnet);
        QWidget::setTabOrder(addMagnet, novas);
        QWidget::setTabOrder(novas, receiveNova);
        QWidget::setTabOrder(receiveNova, addNova);
        QWidget::setTabOrder(addNova, deleteNova);
        QWidget::setTabOrder(deleteNova, receivers);
        QWidget::setTabOrder(receivers, received);
        QWidget::setTabOrder(received, destination);
        QWidget::setTabOrder(destination, etpSelectDestination);
        QWidget::setTabOrder(etpSelectDestination, receivedActionMenu);
        QWidget::setTabOrder(receivedActionMenu, etpMaxMosaicSize);
        QWidget::setTabOrder(etpMaxMosaicSize, transmittedFile);
        QWidget::setTabOrder(transmittedFile, etpSelectFile);
        QWidget::setTabOrder(etpSelectFile, addTransmittedMagnets);
        QWidget::setTabOrder(addTransmittedMagnets, transmitNova);
        QWidget::setTabOrder(transmitNova, generateNova);
        QWidget::setTabOrder(generateNova, pulseSize);
        QWidget::setTabOrder(pulseSize, fragment_starbeam);
        QWidget::setTabOrder(fragment_starbeam, missingLinksCheckBox);
        QWidget::setTabOrder(missingLinksCheckBox, missingLinks);
        QWidget::setTabOrder(missingLinks, demagnetizeMissingLinks);
        QWidget::setTabOrder(demagnetizeMissingLinks, transmit);
        QWidget::setTabOrder(transmit, transmitted);
        QWidget::setTabOrder(transmitted, transmittedMagnets);
        QWidget::setTabOrder(transmittedMagnets, transmittedActionMenu);
        QWidget::setTabOrder(transmittedActionMenu, rewind);
        QWidget::setTabOrder(rewind, scrollArea_10);
        QWidget::setTabOrder(scrollArea_10, activeUrlDistribution);
        QWidget::setTabOrder(activeUrlDistribution, urlDistributionModel);
        QWidget::setTabOrder(urlDistributionModel, urlActionMenu);
        QWidget::setTabOrder(urlActionMenu, urlName);
        QWidget::setTabOrder(urlName, saveUrlName);
        QWidget::setTabOrder(saveUrlName, urlParticipants);
        QWidget::setTabOrder(urlParticipants, urlTab);
        QWidget::setTabOrder(urlTab, downDistillers);
        QWidget::setTabOrder(downDistillers, sharedDistillers);
        QWidget::setTabOrder(sharedDistillers, upDistillers);
        QWidget::setTabOrder(upDistillers, domain);
        QWidget::setTabOrder(domain, downDist);
        QWidget::setTabOrder(downDist, sharedDist);
        QWidget::setTabOrder(sharedDist, upDist);
        QWidget::setTabOrder(upDist, addDistiller);
        QWidget::setTabOrder(addDistiller, deleteDistillers);
        QWidget::setTabOrder(deleteDistillers, refreshDistillers);
        QWidget::setTabOrder(refreshDistillers, toolButtonCopyToClipboard);
        QWidget::setTabOrder(toolButtonCopyToClipboard, addFriendEmail);
        QWidget::setTabOrder(addFriendEmail, addFriendPublicKeyRadio);
        QWidget::setTabOrder(addFriendPublicKeyRadio, friendInformation);
        QWidget::setTabOrder(friendInformation, addFriend);
        QWidget::setTabOrder(addFriend, clearFriend);
        QWidget::setTabOrder(clearFriend, question_rb_authenticate);
        QWidget::setTabOrder(question_rb_authenticate, passphrase_rb_authenticate);
        QWidget::setTabOrder(passphrase_rb_authenticate, question_authenticate);
        QWidget::setTabOrder(question_authenticate, answer_authenticate);
        QWidget::setTabOrder(answer_authenticate, passphrase);
        QWidget::setTabOrder(passphrase, passphraseButton);

        menubar->addAction(menu_File->menuAction());
        menubar->addAction(menu_Edit->menuAction());
        menubar->addAction(menu_Tools->menuAction());
        menubar->addAction(menu_View->menuAction());
        menu_File->addAction(action_ResetSpotOn);
        menu_File->addSeparator();
        menu_File->addAction(action_Quit);
        menu_View->addAction(action_About);
        menu_View->addAction(action_Documentation);
        menu_View->addSeparator();
        menu_View->addAction(action_Neighbor_Summary_Panel);
        menu_View->addSeparator();
        menu_View->addAction(action_Log_Viewer);
        menu_View->addAction(action_Minimal_Display);
        menu_View->addAction(action_Notifications_Window);
        menu_View->addAction(action_Options);
        menu_View->addAction(menu_Pages->menuAction());
        menu_View->addAction(action_Poptastic_Settings);
        menu_View->addAction(action_RSS);
        menu_View->addAction(action_Statistics_Window);
        menu_Pages->addAction(action_Buzz);
        menu_Pages->addAction(action_Listeners);
        menu_Pages->addAction(action_Neighbors);
        menu_Pages->addAction(action_Search);
        menu_Pages->addAction(action_StarBeam);
        menu_Pages->addAction(action_Urls);
        menu_Tools->addAction(action_Export_Listeners);
        menu_Tools->addAction(action_Import_Neighbors);
        menu_Tools->addSeparator();
        menu_Tools->addAction(action_Export_Public_Keys);
        menu_Tools->addAction(action_Import_Public_Keys);
        menu_Tools->addSeparator();
        menu_Tools->addAction(action_Echo_Key_Share);
        menu_Tools->addSeparator();
        menu_Tools->addAction(action_File_Encryption);
        menu_Tools->addSeparator();
        menu_Tools->addAction(action_New_Global_Name);
        menu_Tools->addSeparator();
        menu_Tools->addAction(action_Rosetta);
        menu_Tools->addSeparator();
        menu_Tools->addAction(action_StarBeam_Analyzer);
        menu_Tools->addSeparator();
        menu_Tools->addAction(action_Vacuum_Databases);
        menu_Edit->addAction(actionClear_Clipboard_Buffer);
        menu_Edit->addAction(action_Copy);
        menu_Edit->addAction(action_Paste);
        menu_Edit->addSeparator();
        menu_Edit->addAction(action_Purge_Ephemeral_Keys);

        retranslateUi(spoton_mainwindow);

        tab->setCurrentIndex(0);
        buzzTab->setCurrentIndex(-1);
        status->setCurrentIndex(4);
        mailTab->setCurrentIndex(0);
        email_fs_gb->setCurrentIndex(2);
        listenerTransport->setCurrentIndex(2);
        neighborTransport->setCurrentIndex(2);
        urls_db_type->setCurrentIndex(1);
        guiExternalIpFetch->setCurrentIndex(2);
        kernelExternalIpFetch->setCurrentIndex(2);
        kernelKeySize->setCurrentIndex(0);
        encryptionKeySize->setCurrentIndex(0);
        signatureKeyType->setCurrentIndex(4);
        signatureKeySize->setCurrentIndex(0);
        encryptionKeyType->setCurrentIndex(3);
        etpTab->setCurrentIndex(0);
        urlTab->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(spoton_mainwindow);
    } // setupUi

    void retranslateUi(QMainWindow *spoton_mainwindow)
    {
        action_Quit->setText(QApplication::translate("spoton_mainwindow", "&Quit", 0));
        action_Quit->setShortcut(QApplication::translate("spoton_mainwindow", "Ctrl+Q", 0));
        action_Log_Viewer->setText(QApplication::translate("spoton_mainwindow", "&Log Viewer...", 0));
        action_Log_Viewer->setShortcut(QApplication::translate("spoton_mainwindow", "Ctrl+L", 0));
        action_ResetSpotOn->setText(QApplication::translate("spoton_mainwindow", "&Reset GoldBug", 0));
        action_Rosetta->setText(QApplication::translate("spoton_mainwindow", "&Rosetta...", 0));
        action_Copy->setText(QApplication::translate("spoton_mainwindow", "&Copy", 0));
        action_Copy->setShortcut(QApplication::translate("spoton_mainwindow", "Ctrl+C", 0));
        action_Paste->setText(QApplication::translate("spoton_mainwindow", "&Paste", 0));
        action_Paste->setShortcut(QApplication::translate("spoton_mainwindow", "Ctrl+V", 0));
        action_Export_Public_Keys->setText(QApplication::translate("spoton_mainwindow", "&Export Public Keys...", 0));
        action_Import_Public_Keys->setText(QApplication::translate("spoton_mainwindow", "&Import Public Keys...", 0));
        action_Export_Listeners->setText(QApplication::translate("spoton_mainwindow", "&Export Listeners...", 0));
        action_Import_Neighbors->setText(QApplication::translate("spoton_mainwindow", "&Import Neighbors...", 0));
        action_StarBeam_Analyzer->setText(QApplication::translate("spoton_mainwindow", "&StarBeam Analyzer...", 0));
        action_Minimal_Display->setText(QApplication::translate("spoton_mainwindow", "&Minimal Display", 0));
        action_File_Encryption->setText(QApplication::translate("spoton_mainwindow", "&File Encryption...", 0));
        action_File_Encryption->setShortcut(QApplication::translate("spoton_mainwindow", "Ctrl+F", 0));
        actionClear_Clipboard_Buffer->setText(QApplication::translate("spoton_mainwindow", "Clear Clipboard &Buffer", 0));
        actionClear_Clipboard_Buffer->setShortcut(QApplication::translate("spoton_mainwindow", "Ctrl+B", 0));
        action_Poptastic_Settings->setText(QApplication::translate("spoton_mainwindow", "&Poptastic && RetroPhone Settings...", 0));
        action_Poptastic_Settings->setShortcut(QApplication::translate("spoton_mainwindow", "Ctrl+P", 0));
        action_Options->setText(QApplication::translate("spoton_mainwindow", "&Options...", 0));
        action_Options->setShortcut(QApplication::translate("spoton_mainwindow", "Ctrl+O", 0));
        action_About->setText(QApplication::translate("spoton_mainwindow", "&About...", 0));
        action_Echo_Key_Share->setText(QApplication::translate("spoton_mainwindow", "&Echo Public Key Share...", 0));
        action_Echo_Key_Share->setShortcut(QApplication::translate("spoton_mainwindow", "Ctrl+E", 0));
        action_Purge_Ephemeral_Keys->setText(QApplication::translate("spoton_mainwindow", "Purge &Ephemeral Keys", 0));
        action_Statistics_Window->setText(QApplication::translate("spoton_mainwindow", "&Statistics Window...", 0));
        action_Statistics_Window->setShortcut(QApplication::translate("spoton_mainwindow", "Ctrl+S", 0));
        action_Neighbor_Summary_Panel->setText(QApplication::translate("spoton_mainwindow", "&Neighbor Summary Panel", 0));
        action_RSS->setText(QApplication::translate("spoton_mainwindow", "&RSS...", 0));
        action_RSS->setShortcut(QApplication::translate("spoton_mainwindow", "Ctrl+R", 0));
        action_Buzz->setText(QApplication::translate("spoton_mainwindow", "&Buzz", 0));
        action_Listeners->setText(QApplication::translate("spoton_mainwindow", "&Listeners", 0));
        action_Neighbors->setText(QApplication::translate("spoton_mainwindow", "&Neighbors", 0));
        action_Search->setText(QApplication::translate("spoton_mainwindow", "&Search", 0));
        action_StarBeam->setText(QApplication::translate("spoton_mainwindow", "S&tarBeam", 0));
        action_Urls->setText(QApplication::translate("spoton_mainwindow", "&URLs", 0));
        action_Vacuum_Databases->setText(QApplication::translate("spoton_mainwindow", "&Vacuum SQLite Databases", 0));
#ifndef QT_NO_TOOLTIP
        action_Vacuum_Databases->setToolTip(QApplication::translate("spoton_mainwindow", "<html><head/><body><p>Reclaim storage occupied by empty database pages.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        action_Notifications_Window->setText(QApplication::translate("spoton_mainwindow", "No&tifications Window...", 0));
        action_New_Global_Name->setText(QApplication::translate("spoton_mainwindow", "&New Global Name...", 0));
        action_Documentation->setText(QApplication::translate("spoton_mainwindow", "Documentation...", 0));
        label_30->setText(QApplication::translate("spoton_mainwindow", "e*IRC (Buzz)", 0));
        label_32->setText(QApplication::translate("spoton_mainwindow", "&Name", 0));
        buzzName->setText(QString());
        saveBuzzName->setText(QApplication::translate("spoton_mainwindow", "Save", 0));
        label_82->setText(QApplication::translate("spoton_mainwindow", "&Common Channels", 0));
        buzz_details->setText(QApplication::translate("spoton_mainwindow", "Details", 0));
        label_33->setText(QApplication::translate("spoton_mainwindow", "Channel &Name", 0));
        label_72->setText(QApplication::translate("spoton_mainwindow", "&or Magnet", 0));
#ifndef QT_NO_TOOLTIP
        demagnetize->setToolTip(QApplication::translate("spoton_mainwindow", "Demagnetize the link.", 0));
#endif // QT_NO_TOOLTIP
        label_44->setText(QApplication::translate("spoton_mainwindow", "&Frequency", 0));
        label_36->setText(QApplication::translate("spoton_mainwindow", "Channel &Type", 0));
        label_61->setText(QApplication::translate("spoton_mainwindow", "Hash &Key", 0));
        label_37->setText(QApplication::translate("spoton_mainwindow", "&Salt", 0));
        label_62->setText(QApplication::translate("spoton_mainwindow", "Hash &Type", 0));
        buzzActions->clear();
        buzzActions->insertItems(0, QStringList()
         << QApplication::translate("spoton_mainwindow", "Clear", 0)
         << QApplication::translate("spoton_mainwindow", "Generate", 0)
        );
        label_49->setText(QApplication::translate("spoton_mainwindow", "&Bookmarks", 0));
        buzzTools->clear();
        buzzTools->insertItems(0, QStringList()
         << QApplication::translate("spoton_mainwindow", "Clear", 0)
         << QApplication::translate("spoton_mainwindow", "Demagnetize", 0)
         << QApplication::translate("spoton_mainwindow", "Magnetize", 0)
         << QApplication::translate("spoton_mainwindow", "Remove", 0)
         << QApplication::translate("spoton_mainwindow", "Remove All", 0)
        );
        join->setText(QApplication::translate("spoton_mainwindow", "Join", 0));
        tab->setTabText(tab->indexOf(tab_irc), QString());
        tab->setTabToolTip(tab->indexOf(tab_irc), QApplication::translate("spoton_mainwindow", "e*IRC", 0));
        label_26->setText(QApplication::translate("spoton_mainwindow", "Chat", 0));
        groupBox->setTitle(QString());
        messages->setHtml(QApplication::translate("spoton_mainwindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:8pt;\"><br /></p></body></html>", 0));
#ifndef QT_NO_TOOLTIP
        clearMessages->setToolTip(QApplication::translate("spoton_mainwindow", "Clear chat.", 0));
#endif // QT_NO_TOOLTIP
        clearMessages->setText(QString());
        status->setItemText(0, QApplication::translate("spoton_mainwindow", "Away", 0));
        status->setItemText(1, QApplication::translate("spoton_mainwindow", "Busy", 0));
        status->setItemText(2, QApplication::translate("spoton_mainwindow", "Custom", 0));
        status->setItemText(3, QApplication::translate("spoton_mainwindow", "Offline", 0));
        status->setItemText(4, QApplication::translate("spoton_mainwindow", "Online", 0));

#ifndef QT_NO_TOOLTIP
        status->setToolTip(QApplication::translate("spoton_mainwindow", "Set your status.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        sendMessage->setToolTip(QApplication::translate("spoton_mainwindow", "<html><head/><body><p>Send the message.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        sendMessage->setText(QApplication::translate("spoton_mainwindow", "Send", 0));
#ifndef QT_NO_TOOLTIP
        custom->setToolTip(QApplication::translate("spoton_mainwindow", "Please provide a status message.", 0));
#endif // QT_NO_TOOLTIP
        groupBox_11->setTitle(QApplication::translate("spoton_mainwindow", "Participants", 0));
        QTableWidgetItem *___qtablewidgetitem = participants->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("spoton_mainwindow", "Participant", 0));
        QTableWidgetItem *___qtablewidgetitem1 = participants->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("spoton_mainwindow", "OID", 0));
        QTableWidgetItem *___qtablewidgetitem2 = participants->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("spoton_mainwindow", "neighbor_oid", 0));
        QTableWidgetItem *___qtablewidgetitem3 = participants->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("spoton_mainwindow", "public_key_hash", 0));
        QTableWidgetItem *___qtablewidgetitem4 = participants->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("spoton_mainwindow", "Status", 0));
        QTableWidgetItem *___qtablewidgetitem5 = participants->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("spoton_mainwindow", "Last Status Change", 0));
        QTableWidgetItem *___qtablewidgetitem6 = participants->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("spoton_mainwindow", "Gemini", 0));
#ifndef QT_NO_TOOLTIP
        ___qtablewidgetitem6->setToolTip(QApplication::translate("spoton_mainwindow", "AES-256 Encryption Key", 0));
#endif // QT_NO_TOOLTIP
        QTableWidgetItem *___qtablewidgetitem7 = participants->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("spoton_mainwindow", "Gemini MAC", 0));
#ifndef QT_NO_TOOLTIP
        ___qtablewidgetitem7->setToolTip(QApplication::translate("spoton_mainwindow", "SHA-512 Hash Key", 0));
#endif // QT_NO_TOOLTIP
        QTableWidgetItem *___qtablewidgetitem8 = participants->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QApplication::translate("spoton_mainwindow", "Forward Secrecy Information", 0));
#ifndef QT_NO_TOOLTIP
        participants->setToolTip(QApplication::translate("spoton_mainwindow", "Double-click a friend for a pop-up window.", 0));
#endif // QT_NO_TOOLTIP
        label_5->setText(QApplication::translate("spoton_mainwindow", "&My Name", 0));
#ifndef QT_NO_TOOLTIP
        saveNodeName->setToolTip(QApplication::translate("spoton_mainwindow", "Save my name.", 0));
#endif // QT_NO_TOOLTIP
        saveNodeName->setText(QApplication::translate("spoton_mainwindow", "Save", 0));
        hideOfflineParticipants->setText(QApplication::translate("spoton_mainwindow", "&Hide offline participants.", 0));
#ifndef QT_NO_TOOLTIP
        chatActionMenu->setToolTip(QApplication::translate("spoton_mainwindow", "Right-mouse context menu as a button for tablets.", 0));
#endif // QT_NO_TOOLTIP
        chatActionMenu->setText(QApplication::translate("spoton_mainwindow", "Context Menu Reflection", 0));
        tab->setTabText(tab->indexOf(tab_chat), QString());
        tab->setTabToolTip(tab->indexOf(tab_chat), QApplication::translate("spoton_mainwindow", "Chat", 0));
        label_35->setText(QApplication::translate("spoton_mainwindow", "E-Mail", 0));
#ifndef QT_NO_TOOLTIP
        refreshMail->setToolTip(QApplication::translate("spoton_mainwindow", "Refresh", 0));
#endif // QT_NO_TOOLTIP
        refreshMail->setText(QString());
#ifndef QT_NO_TOOLTIP
        retrieveMail->setToolTip(QApplication::translate("spoton_mainwindow", "<html><head/><body><p>Request e-mail from remote services (Echo, IMAP, POP3).</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        retrieveMail->setText(QString());
#ifndef QT_NO_TOOLTIP
        emptyTrash->setToolTip(QApplication::translate("spoton_mainwindow", "Empty Trash", 0));
#endif // QT_NO_TOOLTIP
        emptyTrash->setText(QString());
        folder->setItemText(0, QApplication::translate("spoton_mainwindow", "Inbox", 0));
        folder->setItemText(1, QApplication::translate("spoton_mainwindow", "Sent", 0));
        folder->setItemText(2, QApplication::translate("spoton_mainwindow", "Trash", 0));

        deleteEmail->setText(QApplication::translate("spoton_mainwindow", "Delete Selection", 0));
        reply->setText(QApplication::translate("spoton_mainwindow", "Reply", 0));
        resend->setText(QApplication::translate("spoton_mainwindow", "Resend", 0));
        saveAttachment->setText(QApplication::translate("spoton_mainwindow", "Save Attachment(s)...", 0));
        QTableWidgetItem *___qtablewidgetitem9 = mail->horizontalHeaderItem(0);
        ___qtablewidgetitem9->setText(QApplication::translate("spoton_mainwindow", "Date", 0));
        QTableWidgetItem *___qtablewidgetitem10 = mail->horizontalHeaderItem(1);
        ___qtablewidgetitem10->setText(QApplication::translate("spoton_mainwindow", "From", 0));
        QTableWidgetItem *___qtablewidgetitem11 = mail->horizontalHeaderItem(2);
        ___qtablewidgetitem11->setText(QApplication::translate("spoton_mainwindow", "Status", 0));
        QTableWidgetItem *___qtablewidgetitem12 = mail->horizontalHeaderItem(3);
        ___qtablewidgetitem12->setText(QApplication::translate("spoton_mainwindow", "Subject", 0));
        QTableWidgetItem *___qtablewidgetitem13 = mail->horizontalHeaderItem(4);
        ___qtablewidgetitem13->setText(QApplication::translate("spoton_mainwindow", "Attachment(s)", 0));
        QTableWidgetItem *___qtablewidgetitem14 = mail->horizontalHeaderItem(5);
        ___qtablewidgetitem14->setText(QApplication::translate("spoton_mainwindow", "goldbug", 0));
        QTableWidgetItem *___qtablewidgetitem15 = mail->horizontalHeaderItem(6);
        ___qtablewidgetitem15->setText(QApplication::translate("spoton_mainwindow", "message", 0));
        QTableWidgetItem *___qtablewidgetitem16 = mail->horizontalHeaderItem(7);
        ___qtablewidgetitem16->setText(QApplication::translate("spoton_mainwindow", "message_digest", 0));
        QTableWidgetItem *___qtablewidgetitem17 = mail->horizontalHeaderItem(8);
        ___qtablewidgetitem17->setText(QApplication::translate("spoton_mainwindow", "receiver_sender_hash", 0));
        QTableWidgetItem *___qtablewidgetitem18 = mail->horizontalHeaderItem(9);
        ___qtablewidgetitem18->setText(QApplication::translate("spoton_mainwindow", "hash", 0));
        QTableWidgetItem *___qtablewidgetitem19 = mail->horizontalHeaderItem(10);
        ___qtablewidgetitem19->setText(QApplication::translate("spoton_mainwindow", "signature", 0));
        QTableWidgetItem *___qtablewidgetitem20 = mail->horizontalHeaderItem(11);
        ___qtablewidgetitem20->setText(QApplication::translate("spoton_mainwindow", "OID", 0));
        mailTab->setTabText(mailTab->indexOf(tab_4), QApplication::translate("spoton_mainwindow", "&Read", 0));
        label_27->setText(QApplication::translate("spoton_mainwindow", "Data that has not been processed in more than", 0));
        label_28->setText(QApplication::translate("spoton_mainwindow", "&day(s) will be purged automatically by the kernel..", 0));
        postofficeCheckBox->setText(QApplication::translate("spoton_mainwindow", "&Enable C/O service for your friends.", 0));
        QTableWidgetItem *___qtablewidgetitem21 = postoffice->horizontalHeaderItem(0);
        ___qtablewidgetitem21->setText(QApplication::translate("spoton_mainwindow", "Date", 0));
        QTableWidgetItem *___qtablewidgetitem22 = postoffice->horizontalHeaderItem(1);
        ___qtablewidgetitem22->setText(QApplication::translate("spoton_mainwindow", "Size", 0));
        QTableWidgetItem *___qtablewidgetitem23 = postoffice->horizontalHeaderItem(2);
        ___qtablewidgetitem23->setText(QApplication::translate("spoton_mainwindow", "Recipient SHA-512 Hash", 0));
        groupBox_6->setTitle(QApplication::translate("spoton_mainwindow", "E-Mail-Institutions", 0));
        QTableWidgetItem *___qtablewidgetitem24 = institutions->horizontalHeaderItem(0);
        ___qtablewidgetitem24->setText(QApplication::translate("spoton_mainwindow", "Institution", 0));
        QTableWidgetItem *___qtablewidgetitem25 = institutions->horizontalHeaderItem(1);
        ___qtablewidgetitem25->setText(QApplication::translate("spoton_mainwindow", "Cipher Type", 0));
        QTableWidgetItem *___qtablewidgetitem26 = institutions->horizontalHeaderItem(2);
        ___qtablewidgetitem26->setText(QApplication::translate("spoton_mainwindow", "Postal Address", 0));
        QTableWidgetItem *___qtablewidgetitem27 = institutions->horizontalHeaderItem(3);
        ___qtablewidgetitem27->setText(QApplication::translate("spoton_mainwindow", "Hash Type", 0));
        copyInstitution->setText(QApplication::translate("spoton_mainwindow", "Copy", 0));
        deleteInstitution->setText(QApplication::translate("spoton_mainwindow", "Delete", 0));
        groupBox_5->setTitle(QApplication::translate("spoton_mainwindow", "Add Institution", 0));
        label_75->setText(QApplication::translate("spoton_mainwindow", "&Name", 0));
        label_77->setText(QApplication::translate("spoton_mainwindow", "&Postal Address", 0));
        label_79->setText(QApplication::translate("spoton_mainwindow", "&Cipher Type", 0));
        label_80->setText(QApplication::translate("spoton_mainwindow", "&Hash Type", 0));
        addInstitutionCheckBox->setText(QApplication::translate("spoton_mainwindow", "&or add a Magnet", 0));
        addInstitution->setText(QApplication::translate("spoton_mainwindow", "Add", 0));
        mailTab->setTabText(mailTab->indexOf(tab_6), QApplication::translate("spoton_mainwindow", "&C/O", 0));
        label_25->setText(QApplication::translate("spoton_mainwindow", "&Subject", 0));
        label_6->setText(QApplication::translate("spoton_mainwindow", "&Optional", 0));
        reloadEmailNames->setText(QApplication::translate("spoton_mainwindow", "Reload", 0));
        saveEmailName->setText(QApplication::translate("spoton_mainwindow", "Save", 0));
        label_41->setText(QApplication::translate("spoton_mainwindow", "&From", 0));
        label_4->setText(QApplication::translate("spoton_mainwindow", "&Message", 0));
        richtext->setText(QApplication::translate("spoton_mainwindow", "&Rich Text", 0));
#ifndef QT_NO_TOOLTIP
        goldbug->setToolTip(QApplication::translate("spoton_mainwindow", "<html><head/><body><p>Bundle the e-mail components in an additional layer of AES-256 encryption and SHA-512 authentication. Do remember to notify all recipients of the Gold Bug.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        email_fs_gb->clear();
        email_fs_gb->insertItems(0, QStringList()
         << QApplication::translate("spoton_mainwindow", "Forward Secrecy", 0)
         << QApplication::translate("spoton_mainwindow", "Gold Bug", 0)
         << QApplication::translate("spoton_mainwindow", "Normal", 0)
         << QApplication::translate("spoton_mainwindow", "Pure Forward Secrecy", 0)
        );
        saveCopy->setText(QApplication::translate("spoton_mainwindow", "&Save copies.", 0));
        sign_this_email->setText(QApplication::translate("spoton_mainwindow", "&Sign this e-mail.", 0));
        sendMail->setText(QApplication::translate("spoton_mainwindow", "Send", 0));
#ifndef QT_NO_TOOLTIP
        attachment->setToolTip(QApplication::translate("spoton_mainwindow", "<html><head/><body><p>Traditional e-mail supports only single attachments. Inline attachments are also not supported.</p><p>Click an attachment to remove it.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        selectAttachment->setText(QApplication::translate("spoton_mainwindow", "Attach...", 0));
        QTableWidgetItem *___qtablewidgetitem28 = emailParticipants->horizontalHeaderItem(0);
        ___qtablewidgetitem28->setText(QApplication::translate("spoton_mainwindow", "Participant", 0));
        QTableWidgetItem *___qtablewidgetitem29 = emailParticipants->horizontalHeaderItem(1);
        ___qtablewidgetitem29->setText(QApplication::translate("spoton_mainwindow", "OID", 0));
        QTableWidgetItem *___qtablewidgetitem30 = emailParticipants->horizontalHeaderItem(2);
        ___qtablewidgetitem30->setText(QApplication::translate("spoton_mainwindow", "neighbor_oid", 0));
        QTableWidgetItem *___qtablewidgetitem31 = emailParticipants->horizontalHeaderItem(3);
        ___qtablewidgetitem31->setText(QApplication::translate("spoton_mainwindow", "public_key_hash", 0));
        QTableWidgetItem *___qtablewidgetitem32 = emailParticipants->horizontalHeaderItem(4);
        ___qtablewidgetitem32->setText(QApplication::translate("spoton_mainwindow", "Forward Secrecy Information", 0));
        label_94->setText(QApplication::translate("spoton_mainwindow", "&Attachment(s)", 0));
#ifndef QT_NO_TOOLTIP
        clearOutgoing->setToolTip(QApplication::translate("spoton_mainwindow", "New Letter", 0));
#endif // QT_NO_TOOLTIP
        clearOutgoing->setText(QString());
        label_10->setText(QApplication::translate("spoton_mainwindow", "&To", 0));
#ifndef QT_NO_TOOLTIP
        emailWriteActionMenu->setToolTip(QApplication::translate("spoton_mainwindow", "Context Menu", 0));
#endif // QT_NO_TOOLTIP
        emailWriteActionMenu->setText(QApplication::translate("spoton_mainwindow", "Context Menu Reflection", 0));
        mailTab->setTabText(mailTab->indexOf(tab_13), QApplication::translate("spoton_mainwindow", "&Write", 0));
        tab->setTabText(tab->indexOf(tab_email), QString());
        tab->setTabToolTip(tab->indexOf(tab_email), QApplication::translate("spoton_mainwindow", "E-Mail", 0));
        label_76->setText(QApplication::translate("spoton_mainwindow", "Create Chat-Server", 0));
        QTableWidgetItem *___qtablewidgetitem33 = listeners->horizontalHeaderItem(0);
        ___qtablewidgetitem33->setText(QApplication::translate("spoton_mainwindow", "Activate", 0));
        QTableWidgetItem *___qtablewidgetitem34 = listeners->horizontalHeaderItem(1);
        ___qtablewidgetitem34->setText(QApplication::translate("spoton_mainwindow", "Status", 0));
        QTableWidgetItem *___qtablewidgetitem35 = listeners->horizontalHeaderItem(2);
        ___qtablewidgetitem35->setText(QApplication::translate("spoton_mainwindow", "Bluetooth Flags / SSL Key Size", 0));
        QTableWidgetItem *___qtablewidgetitem36 = listeners->horizontalHeaderItem(3);
        ___qtablewidgetitem36->setText(QApplication::translate("spoton_mainwindow", "Local IP", 0));
        QTableWidgetItem *___qtablewidgetitem37 = listeners->horizontalHeaderItem(4);
        ___qtablewidgetitem37->setText(QApplication::translate("spoton_mainwindow", "Local Port", 0));
        QTableWidgetItem *___qtablewidgetitem38 = listeners->horizontalHeaderItem(5);
        ___qtablewidgetitem38->setText(QApplication::translate("spoton_mainwindow", "Scope ID", 0));
        QTableWidgetItem *___qtablewidgetitem39 = listeners->horizontalHeaderItem(6);
        ___qtablewidgetitem39->setText(QApplication::translate("spoton_mainwindow", "Protocol", 0));
        QTableWidgetItem *___qtablewidgetitem40 = listeners->horizontalHeaderItem(7);
        ___qtablewidgetitem40->setText(QApplication::translate("spoton_mainwindow", "External IP", 0));
        QTableWidgetItem *___qtablewidgetitem41 = listeners->horizontalHeaderItem(8);
        ___qtablewidgetitem41->setText(QApplication::translate("spoton_mainwindow", "External Port", 0));
        QTableWidgetItem *___qtablewidgetitem42 = listeners->horizontalHeaderItem(9);
        ___qtablewidgetitem42->setText(QApplication::translate("spoton_mainwindow", "Connections", 0));
        QTableWidgetItem *___qtablewidgetitem43 = listeners->horizontalHeaderItem(10);
        ___qtablewidgetitem43->setText(QApplication::translate("spoton_mainwindow", "Max. Conn.", 0));
        QTableWidgetItem *___qtablewidgetitem44 = listeners->horizontalHeaderItem(11);
        ___qtablewidgetitem44->setText(QApplication::translate("spoton_mainwindow", "Echo Mode", 0));
        QTableWidgetItem *___qtablewidgetitem45 = listeners->horizontalHeaderItem(12);
        ___qtablewidgetitem45->setText(QApplication::translate("spoton_mainwindow", "Use Accounts", 0));
        QTableWidgetItem *___qtablewidgetitem46 = listeners->horizontalHeaderItem(13);
        ___qtablewidgetitem46->setText(QApplication::translate("spoton_mainwindow", "Max. Buffer Size (Bytes)", 0));
        QTableWidgetItem *___qtablewidgetitem47 = listeners->horizontalHeaderItem(14);
        ___qtablewidgetitem47->setText(QApplication::translate("spoton_mainwindow", "Max. Content Length (Bytes)", 0));
        QTableWidgetItem *___qtablewidgetitem48 = listeners->horizontalHeaderItem(15);
        ___qtablewidgetitem48->setText(QApplication::translate("spoton_mainwindow", "Transport", 0));
        QTableWidgetItem *___qtablewidgetitem49 = listeners->horizontalHeaderItem(16);
        ___qtablewidgetitem49->setText(QApplication::translate("spoton_mainwindow", "Share Address", 0));
        QTableWidgetItem *___qtablewidgetitem50 = listeners->horizontalHeaderItem(17);
        ___qtablewidgetitem50->setText(QApplication::translate("spoton_mainwindow", "Certificate SHA-512 Hash", 0));
        QTableWidgetItem *___qtablewidgetitem51 = listeners->horizontalHeaderItem(18);
        ___qtablewidgetitem51->setText(QApplication::translate("spoton_mainwindow", "Orientation", 0));
        QTableWidgetItem *___qtablewidgetitem52 = listeners->horizontalHeaderItem(19);
        ___qtablewidgetitem52->setText(QApplication::translate("spoton_mainwindow", "SSL Control String", 0));
        QTableWidgetItem *___qtablewidgetitem53 = listeners->horizontalHeaderItem(20);
        ___qtablewidgetitem53->setText(QApplication::translate("spoton_mainwindow", "Lane Width (Bytes)", 0));
        QTableWidgetItem *___qtablewidgetitem54 = listeners->horizontalHeaderItem(21);
        ___qtablewidgetitem54->setText(QApplication::translate("spoton_mainwindow", "Passthrough", 0));
        QTableWidgetItem *___qtablewidgetitem55 = listeners->horizontalHeaderItem(22);
        ___qtablewidgetitem55->setText(QApplication::translate("spoton_mainwindow", "Randomness Source (Bytes)", 0));
        QTableWidgetItem *___qtablewidgetitem56 = listeners->horizontalHeaderItem(23);
        ___qtablewidgetitem56->setText(QApplication::translate("spoton_mainwindow", "Private Application Credentials", 0));
        QTableWidgetItem *___qtablewidgetitem57 = listeners->horizontalHeaderItem(24);
        ___qtablewidgetitem57->setText(QApplication::translate("spoton_mainwindow", "OID", 0));
        groupBox_7->setTitle(QApplication::translate("spoton_mainwindow", "Add Chat-Server-Listener", 0));
        label_21->setText(QApplication::translate("spoton_mainwindow", "The uniqueness of a listener is defined by its local IP, local port, scope ID, and transport.", 0));
        label_38->setText(QApplication::translate("spoton_mainwindow", "&Echo Mode", 0));
        listenersEchoMode->clear();
        listenersEchoMode->insertItems(0, QStringList()
         << QApplication::translate("spoton_mainwindow", "Full Echo", 0)
         << QApplication::translate("spoton_mainwindow", "Half Echo", 0)
        );
#ifndef QT_NO_TOOLTIP
        listenerShareAddress->setToolTip(QApplication::translate("spoton_mainwindow", "Allow other UDP services to bind to the same address and port. Ignored on Windows.", 0));
#endif // QT_NO_TOOLTIP
        listenerShareAddress->setText(QApplication::translate("spoton_mainwindow", "&Share Address", 0));
#ifndef QT_NO_TOOLTIP
        listenersActionMenu->setToolTip(QApplication::translate("spoton_mainwindow", "Context Menu", 0));
#endif // QT_NO_TOOLTIP
        listenersActionMenu->setText(QApplication::translate("spoton_mainwindow", "Context Menu Reflection", 0));
        sslListener->setText(QApplication::translate("spoton_mainwindow", "&SSL Key Size", 0));
        listenerKeySize->clear();
        listenerKeySize->insertItems(0, QStringList()
         << QApplication::translate("spoton_mainwindow", "2048", 0)
         << QApplication::translate("spoton_mainwindow", "3072", 0)
         << QApplication::translate("spoton_mainwindow", "4096", 0)
        );
        permanentCertificate->setText(QApplication::translate("spoton_mainwindow", "&Permanent Certificate", 0));
#ifndef QT_NO_TOOLTIP
        recordIPAddress->setToolTip(QApplication::translate("spoton_mainwindow", "<html><head/><body><p>Record the current external IP address in the listener's certificate. Please do not use this option if you have a dynamic IP address.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        recordIPAddress->setText(QApplication::translate("spoton_mainwindow", "&IP Address", 0));
        listenerTransport->clear();
        listenerTransport->insertItems(0, QStringList()
         << QApplication::translate("spoton_mainwindow", "Bluetooth", 0)
         << QApplication::translate("spoton_mainwindow", "SCTP", 0)
         << QApplication::translate("spoton_mainwindow", "TCP", 0)
         << QApplication::translate("spoton_mainwindow", "UDP", 0)
        );
#ifndef QT_NO_TOOLTIP
        listenerPort->setToolTip(QApplication::translate("spoton_mainwindow", "Please forward this port in your router.", 0));
#endif // QT_NO_TOOLTIP
        ipv4Listener->setText(QApplication::translate("spoton_mainwindow", "IPv&4", 0));
        label_65->setText(QApplication::translate("spoton_mainwindow", "Transport", 0));
        listenerIPCombo->clear();
        listenerIPCombo->insertItems(0, QStringList()
         << QApplication::translate("spoton_mainwindow", "Custom", 0)
        );
        label_12->setText(QApplication::translate("spoton_mainwindow", "Port", 0));
        listenerScopeIdLabel->setText(QApplication::translate("spoton_mainwindow", "&Scope ID", 0));
        ipv6Listener->setText(QApplication::translate("spoton_mainwindow", "IPv&6", 0));
        label_11->setText(QApplication::translate("spoton_mainwindow", "My IP", 0));
        addListener->setText(QApplication::translate("spoton_mainwindow", "Add", 0));
        label_122->setText(QApplication::translate("spoton_mainwindow", "&Day(s) Valid", 0));
        label_64->setText(QApplication::translate("spoton_mainwindow", "&SSL Control String", 0));
        listenersSslControlString->setText(QApplication::translate("spoton_mainwindow", "HIGH:!aNULL:!eNULL:!3DES:!EXPORT:!SSLv3:@STRENGTH", 0));
        label_71->setText(QApplication::translate("spoton_mainwindow", "Orientation", 0));
        listenerOrientation->clear();
        listenerOrientation->insertItems(0, QStringList()
         << QApplication::translate("spoton_mainwindow", "Packet", 0)
         << QApplication::translate("spoton_mainwindow", "Stream", 0)
        );
        accountsGB->setTitle(QApplication::translate("spoton_mainwindow", "Accounts", 0));
        deleteAccount->setText(QApplication::translate("spoton_mainwindow", "Delete", 0));
#ifndef QT_NO_TOOLTIP
        ota->setToolTip(QApplication::translate("spoton_mainwindow", "If checked, the account will be removed after a client successfully authenticates itself.", 0));
#endif // QT_NO_TOOLTIP
        ota->setText(QApplication::translate("spoton_mainwindow", "&One-Time Account", 0));
        label_88->setText(QApplication::translate("spoton_mainwindow", "The account name and the account password must contain at least thirty-two characters each.", 0));
        label_47->setText(QApplication::translate("spoton_mainwindow", "&Name", 0));
        label_48->setText(QApplication::translate("spoton_mainwindow", "&Password", 0));
        addAccount->setText(QApplication::translate("spoton_mainwindow", "Add", 0));
        approvedIPs->setTitle(QApplication::translate("spoton_mainwindow", "Allowed IP Addresses", 0));
#ifndef QT_NO_TOOLTIP
        acceptedIP->setToolTip(QApplication::translate("spoton_mainwindow", "The keyword Any is supported.", 0));
#endif // QT_NO_TOOLTIP
        addAcceptedIP->setText(QApplication::translate("spoton_mainwindow", "Add", 0));
        deleteAcceptedIP->setText(QApplication::translate("spoton_mainwindow", "Delete", 0));
        aeBox->setTitle(QApplication::translate("spoton_mainwindow", "Adaptive Echo Tokens", 0));
        label_93->setText(QApplication::translate("spoton_mainwindow", "Adaptive echo tokens are applied to all defined listeners.", 0));
        QTableWidgetItem *___qtablewidgetitem58 = ae_tokens->horizontalHeaderItem(0);
        ___qtablewidgetitem58->setText(QApplication::translate("spoton_mainwindow", "Token", 0));
        QTableWidgetItem *___qtablewidgetitem59 = ae_tokens->horizontalHeaderItem(1);
        ___qtablewidgetitem59->setText(QApplication::translate("spoton_mainwindow", "Token Encryption Type", 0));
        QTableWidgetItem *___qtablewidgetitem60 = ae_tokens->horizontalHeaderItem(2);
        ___qtablewidgetitem60->setText(QApplication::translate("spoton_mainwindow", "Token Hash Type", 0));
        label_89->setText(QApplication::translate("spoton_mainwindow", "The token must contain at least ninety-six characters.", 0));
        label_83->setText(QApplication::translate("spoton_mainwindow", "&Token", 0));
        label_84->setText(QApplication::translate("spoton_mainwindow", "&Encryption Token Type", 0));
        label_85->setText(QApplication::translate("spoton_mainwindow", "&Hash Token Type", 0));
        ae_listeners_magnet->setText(QApplication::translate("spoton_mainwindow", "&Magnet", 0));
        addAEToken->setText(QApplication::translate("spoton_mainwindow", "Add", 0));
        deleteAEToken->setText(QApplication::translate("spoton_mainwindow", "Delete", 0));
        motdBox->setTitle(QApplication::translate("spoton_mainwindow", "Message of the Day", 0));
        saveMOTD->setText(QApplication::translate("spoton_mainwindow", "Save", 0));
        tab->setTabText(tab->indexOf(tab_createserver), QString());
        tab->setTabToolTip(tab->indexOf(tab_createserver), QApplication::translate("spoton_mainwindow", "Create Server", 0));
        label_86->setText(QApplication::translate("spoton_mainwindow", "Connect to a Neighbor", 0));
#ifndef QT_NO_TOOLTIP
        neighborsActionMenu->setToolTip(QApplication::translate("spoton_mainwindow", "Context Menu", 0));
#endif // QT_NO_TOOLTIP
        neighborsActionMenu->setText(QApplication::translate("spoton_mainwindow", "Context Menu Reflection", 0));
        shareBuzzMagnet->setText(QApplication::translate("spoton_mainwindow", "Share Buzz Magnet", 0));
        QTableWidgetItem *___qtablewidgetitem61 = neighbors->horizontalHeaderItem(0);
        ___qtablewidgetitem61->setText(QApplication::translate("spoton_mainwindow", "Sticky", 0));
        QTableWidgetItem *___qtablewidgetitem62 = neighbors->horizontalHeaderItem(1);
        ___qtablewidgetitem62->setText(QApplication::translate("spoton_mainwindow", "UUID", 0));
        QTableWidgetItem *___qtablewidgetitem63 = neighbors->horizontalHeaderItem(2);
        ___qtablewidgetitem63->setText(QApplication::translate("spoton_mainwindow", "Status", 0));
        QTableWidgetItem *___qtablewidgetitem64 = neighbors->horizontalHeaderItem(3);
        ___qtablewidgetitem64->setText(QApplication::translate("spoton_mainwindow", "SSL Key Size", 0));
        QTableWidgetItem *___qtablewidgetitem65 = neighbors->horizontalHeaderItem(4);
        ___qtablewidgetitem65->setText(QApplication::translate("spoton_mainwindow", "Status Control", 0));
        QTableWidgetItem *___qtablewidgetitem66 = neighbors->horizontalHeaderItem(5);
        ___qtablewidgetitem66->setText(QApplication::translate("spoton_mainwindow", "Local IP", 0));
        QTableWidgetItem *___qtablewidgetitem67 = neighbors->horizontalHeaderItem(6);
        ___qtablewidgetitem67->setText(QApplication::translate("spoton_mainwindow", "Local Port", 0));
        QTableWidgetItem *___qtablewidgetitem68 = neighbors->horizontalHeaderItem(7);
        ___qtablewidgetitem68->setText(QApplication::translate("spoton_mainwindow", "External IP", 0));
        QTableWidgetItem *___qtablewidgetitem69 = neighbors->horizontalHeaderItem(8);
        ___qtablewidgetitem69->setText(QApplication::translate("spoton_mainwindow", "External Port", 0));
        QTableWidgetItem *___qtablewidgetitem70 = neighbors->horizontalHeaderItem(9);
        ___qtablewidgetitem70->setText(QApplication::translate("spoton_mainwindow", "Country", 0));
        QTableWidgetItem *___qtablewidgetitem71 = neighbors->horizontalHeaderItem(10);
        ___qtablewidgetitem71->setText(QApplication::translate("spoton_mainwindow", "Remote IP", 0));
        QTableWidgetItem *___qtablewidgetitem72 = neighbors->horizontalHeaderItem(11);
        ___qtablewidgetitem72->setText(QApplication::translate("spoton_mainwindow", "Remote Port", 0));
        QTableWidgetItem *___qtablewidgetitem73 = neighbors->horizontalHeaderItem(12);
        ___qtablewidgetitem73->setText(QApplication::translate("spoton_mainwindow", "Scope ID", 0));
        QTableWidgetItem *___qtablewidgetitem74 = neighbors->horizontalHeaderItem(13);
        ___qtablewidgetitem74->setText(QApplication::translate("spoton_mainwindow", "Protocol", 0));
        QTableWidgetItem *___qtablewidgetitem75 = neighbors->horizontalHeaderItem(14);
        ___qtablewidgetitem75->setText(QApplication::translate("spoton_mainwindow", "Proxy Hostname", 0));
        QTableWidgetItem *___qtablewidgetitem76 = neighbors->horizontalHeaderItem(15);
        ___qtablewidgetitem76->setText(QApplication::translate("spoton_mainwindow", "Proxy Port", 0));
        QTableWidgetItem *___qtablewidgetitem77 = neighbors->horizontalHeaderItem(16);
        ___qtablewidgetitem77->setText(QApplication::translate("spoton_mainwindow", "Max. Buffer Size (Bytes)", 0));
        QTableWidgetItem *___qtablewidgetitem78 = neighbors->horizontalHeaderItem(17);
        ___qtablewidgetitem78->setText(QApplication::translate("spoton_mainwindow", "Max. Content Length (Bytes)", 0));
        QTableWidgetItem *___qtablewidgetitem79 = neighbors->horizontalHeaderItem(18);
        ___qtablewidgetitem79->setText(QApplication::translate("spoton_mainwindow", "Echo Mode", 0));
        QTableWidgetItem *___qtablewidgetitem80 = neighbors->horizontalHeaderItem(19);
        ___qtablewidgetitem80->setText(QApplication::translate("spoton_mainwindow", "Uptime (Seconds)", 0));
        QTableWidgetItem *___qtablewidgetitem81 = neighbors->horizontalHeaderItem(20);
        ___qtablewidgetitem81->setText(QApplication::translate("spoton_mainwindow", "Allow Certificate Exceptions", 0));
        QTableWidgetItem *___qtablewidgetitem82 = neighbors->horizontalHeaderItem(21);
        ___qtablewidgetitem82->setText(QApplication::translate("spoton_mainwindow", "Certificate SHA-512 Hash", 0));
        QTableWidgetItem *___qtablewidgetitem83 = neighbors->horizontalHeaderItem(22);
        ___qtablewidgetitem83->setText(QApplication::translate("spoton_mainwindow", "Bytes Read", 0));
        QTableWidgetItem *___qtablewidgetitem84 = neighbors->horizontalHeaderItem(23);
        ___qtablewidgetitem84->setText(QApplication::translate("spoton_mainwindow", "Bytes Written", 0));
        QTableWidgetItem *___qtablewidgetitem85 = neighbors->horizontalHeaderItem(24);
        ___qtablewidgetitem85->setText(QApplication::translate("spoton_mainwindow", "SSL Session Cipher", 0));
        QTableWidgetItem *___qtablewidgetitem86 = neighbors->horizontalHeaderItem(25);
        ___qtablewidgetitem86->setText(QApplication::translate("spoton_mainwindow", "Account Name", 0));
        QTableWidgetItem *___qtablewidgetitem87 = neighbors->horizontalHeaderItem(26);
        ___qtablewidgetitem87->setText(QApplication::translate("spoton_mainwindow", "Account Authenticated", 0));
        QTableWidgetItem *___qtablewidgetitem88 = neighbors->horizontalHeaderItem(27);
        ___qtablewidgetitem88->setText(QApplication::translate("spoton_mainwindow", "Transport", 0));
        QTableWidgetItem *___qtablewidgetitem89 = neighbors->horizontalHeaderItem(28);
        ___qtablewidgetitem89->setText(QApplication::translate("spoton_mainwindow", "Orientation", 0));
        QTableWidgetItem *___qtablewidgetitem90 = neighbors->horizontalHeaderItem(29);
        ___qtablewidgetitem90->setText(QApplication::translate("spoton_mainwindow", "Message of the Day", 0));
        QTableWidgetItem *___qtablewidgetitem91 = neighbors->horizontalHeaderItem(30);
        ___qtablewidgetitem91->setText(QApplication::translate("spoton_mainwindow", "Encrypted", 0));
        QTableWidgetItem *___qtablewidgetitem92 = neighbors->horizontalHeaderItem(31);
        ___qtablewidgetitem92->setText(QApplication::translate("spoton_mainwindow", "certificate", 0));
        QTableWidgetItem *___qtablewidgetitem93 = neighbors->horizontalHeaderItem(32);
        ___qtablewidgetitem93->setText(QApplication::translate("spoton_mainwindow", "Adaptive Echo Token", 0));
        QTableWidgetItem *___qtablewidgetitem94 = neighbors->horizontalHeaderItem(33);
        ___qtablewidgetitem94->setText(QApplication::translate("spoton_mainwindow", "Adaptive Echo Token Type", 0));
        QTableWidgetItem *___qtablewidgetitem95 = neighbors->horizontalHeaderItem(34);
        ___qtablewidgetitem95->setText(QApplication::translate("spoton_mainwindow", "SSL Control String", 0));
        QTableWidgetItem *___qtablewidgetitem96 = neighbors->horizontalHeaderItem(35);
        ___qtablewidgetitem96->setText(QApplication::translate("spoton_mainwindow", "Priority", 0));
        QTableWidgetItem *___qtablewidgetitem97 = neighbors->horizontalHeaderItem(36);
        ___qtablewidgetitem97->setText(QApplication::translate("spoton_mainwindow", "Lane Width (Bytes)", 0));
        QTableWidgetItem *___qtablewidgetitem98 = neighbors->horizontalHeaderItem(37);
        ___qtablewidgetitem98->setText(QApplication::translate("spoton_mainwindow", "Passthrough", 0));
        QTableWidgetItem *___qtablewidgetitem99 = neighbors->horizontalHeaderItem(38);
        ___qtablewidgetitem99->setText(QApplication::translate("spoton_mainwindow", "Wait-For-Bytes-Written (Milliseconds)", 0));
        QTableWidgetItem *___qtablewidgetitem100 = neighbors->horizontalHeaderItem(39);
        ___qtablewidgetitem100->setText(QApplication::translate("spoton_mainwindow", "Private Application Credentials", 0));
        QTableWidgetItem *___qtablewidgetitem101 = neighbors->horizontalHeaderItem(40);
        ___qtablewidgetitem101->setText(QApplication::translate("spoton_mainwindow", "Silence Time (Seconds)", 0));
        QTableWidgetItem *___qtablewidgetitem102 = neighbors->horizontalHeaderItem(41);
        ___qtablewidgetitem102->setText(QApplication::translate("spoton_mainwindow", "OID", 0));
        groupBox_addip_2->setTitle(QApplication::translate("spoton_mainwindow", "Add Neighbor", 0));
        label_23->setText(QApplication::translate("spoton_mainwindow", "The uniqueness of a neighbor is defined by its proxy hostname, proxy port, remote IP, remote port, scope ID, and transport.", 0));
        label_24->setText(QApplication::translate("spoton_mainwindow", "&IP", 0));
        label_13->setText(QApplication::translate("spoton_mainwindow", "&Port", 0));
        neighborScopeIdLabel->setText(QApplication::translate("spoton_mainwindow", "&Scope ID", 0));
        label_66->setText(QApplication::translate("spoton_mainwindow", "&Transport", 0));
        neighborTransport->clear();
        neighborTransport->insertItems(0, QStringList()
         << QApplication::translate("spoton_mainwindow", "Bluetooth", 0)
         << QApplication::translate("spoton_mainwindow", "SCTP", 0)
         << QApplication::translate("spoton_mainwindow", "TCP", 0)
         << QApplication::translate("spoton_mainwindow", "UDP", 0)
        );
        label_70->setText(QApplication::translate("spoton_mainwindow", "Orientation", 0));
        neighborOrientation->clear();
        neighborOrientation->insertItems(0, QStringList()
         << QApplication::translate("spoton_mainwindow", "Packet", 0)
         << QApplication::translate("spoton_mainwindow", "Stream", 0)
        );
        ipv6Neighbor->setText(QApplication::translate("spoton_mainwindow", "IPv&6", 0));
#ifndef QT_NO_TOOLTIP
        dynamicdns->setToolTip(QApplication::translate("spoton_mainwindow", "Dynamic DNS", 0));
#endif // QT_NO_TOOLTIP
        dynamicdns->setText(QApplication::translate("spoton_mainwindow", "&DDNS", 0));
        ipv4Neighbor->setText(QApplication::translate("spoton_mainwindow", "IPv&4", 0));
        label_39->setText(QApplication::translate("spoton_mainwindow", "&Echo Mode", 0));
        neighborsEchoMode->clear();
        neighborsEchoMode->insertItems(0, QStringList()
         << QApplication::translate("spoton_mainwindow", "Full Echo", 0)
         << QApplication::translate("spoton_mainwindow", "Half Echo", 0)
        );
#ifndef QT_NO_TOOLTIP
        addException->setToolTip(QApplication::translate("spoton_mainwindow", "<html><head/><body><p>GoldBug will record peer certificates during initial connections. Subsequent connections will cause GoldBug to inspect peer certificates. If there are discrepancies between recorded certificates and transmitted certificates, GoldBug will sever the connections. Enable this option if you would like GoldBug to ignore discrepancies.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        addException->setText(QApplication::translate("spoton_mainwindow", "&Allow Exceptions", 0));
#ifndef QT_NO_TOOLTIP
        requireSsl->setToolTip(QApplication::translate("spoton_mainwindow", "Require secure connections.", 0));
#endif // QT_NO_TOOLTIP
        requireSsl->setText(QApplication::translate("spoton_mainwindow", "&Require SSL", 0));
        sslKeySizeLabel->setText(QApplication::translate("spoton_mainwindow", "&SSL Key Size", 0));
        neighborKeySize->clear();
        neighborKeySize->insertItems(0, QStringList()
         << QApplication::translate("spoton_mainwindow", "2048", 0)
         << QApplication::translate("spoton_mainwindow", "3072", 0)
         << QApplication::translate("spoton_mainwindow", "4096", 0)
        );
        label_78->setText(QApplication::translate("spoton_mainwindow", "&SSL Control String", 0));
        neighborsSslControlString->setText(QApplication::translate("spoton_mainwindow", "HIGH:!aNULL:!eNULL:!3DES:!EXPORT:!SSLv3:@STRENGTH", 0));
        proxy->setTitle(QApplication::translate("spoton_mainwindow", "Pro&xy", 0));
        label_7->setText(QApplication::translate("spoton_mainwindow", "&Hostname", 0));
        label_19->setText(QApplication::translate("spoton_mainwindow", "&Username", 0));
        proxyType->clear();
        proxyType->insertItems(0, QStringList()
         << QApplication::translate("spoton_mainwindow", "HTTP", 0)
         << QApplication::translate("spoton_mainwindow", "Socks5", 0)
         << QApplication::translate("spoton_mainwindow", "System", 0)
        );
        label_3->setText(QApplication::translate("spoton_mainwindow", "&Type", 0));
        proxyPassword->setText(QString());
        label_20->setText(QApplication::translate("spoton_mainwindow", "&Password", 0));
        label_8->setText(QApplication::translate("spoton_mainwindow", "&Port", 0));
        addNeighbor->setText(QApplication::translate("spoton_mainwindow", "Connect", 0));
        tab->setTabText(tab->indexOf(tab_neighbors), QString());
        tab->setTabToolTip(tab->indexOf(tab_neighbors), QApplication::translate("spoton_mainwindow", "Connections", 0));
        label_119->setText(QApplication::translate("spoton_mainwindow", "Web Search", 0));
        showUrlSettings->setText(QApplication::translate("spoton_mainwindow", "Settings", 0));
        postgresql_recommendation_label->setText(QApplication::translate("spoton_mainwindow", "<html><head/><body><p>Please consider installing PostgreSQL. Although SQLite is fully supported, PostgreSQL offers improved performance as well as networking capabilities. Please visit <a href=\"https://www.postgresql.org/download\">https://www.postgresql.org/download</a>.</p></body></html>", 0));
        groupBox_15->setTitle(QApplication::translate("spoton_mainwindow", "Database", 0));
        label_105->setText(QApplication::translate("spoton_mainwindow", "1", 0));
        urls_db_type->clear();
        urls_db_type->insertItems(0, QStringList()
         << QApplication::translate("spoton_mainwindow", "PostgreSQL", 0)
         << QApplication::translate("spoton_mainwindow", "SQLite", 0)
        );
        postgresqlConnect->setText(QApplication::translate("spoton_mainwindow", "&PostgreSQL Connect...", 0));
        label_120->setText(QApplication::translate("spoton_mainwindow", "2", 0));
        prepareUrlDatabases->setText(QApplication::translate("spoton_mainwindow", "Prepare Databases", 0));
#ifndef QT_NO_TOOLTIP
        correctUrlDatabases->setToolTip(QApplication::translate("spoton_mainwindow", "Remove orphaned database entries.", 0));
#endif // QT_NO_TOOLTIP
        correctUrlDatabases->setText(QApplication::translate("spoton_mainwindow", "Correct Databases", 0));
        groupBox_14->setTitle(QApplication::translate("spoton_mainwindow", "Common Credentials", 0));
        commonCredentialsLabel->setText(QApplication::translate("spoton_mainwindow", "Common credentials have not been set.", 0));
        label_134->setText(QApplication::translate("spoton_mainwindow", "3", 0));
        label_131->setText(QApplication::translate("spoton_mainwindow", "<html><head/><body><p>You may access the PostgreSQL URL database from multiple devices if common credentials are prepared. The credentials are stored in an SQLite database.</p></body></html>", 0));
        label_132->setText(QApplication::translate("spoton_mainwindow", "&Secret", 0));
        label_133->setText(QApplication::translate("spoton_mainwindow", "P&IN", 0));
#ifndef QT_NO_TOOLTIP
        saveCommonUrlCredentials->setToolTip(QApplication::translate("spoton_mainwindow", "<html><head/><body><p>Generate encryption and hash keys and save the results along with relevant information.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        saveCommonUrlCredentials->setText(QApplication::translate("spoton_mainwindow", "Save", 0));
        label_138->setText(QApplication::translate("spoton_mainwindow", "&Cipher Type", 0));
        label_139->setText(QApplication::translate("spoton_mainwindow", "&Hash Type", 0));
        label_140->setText(QApplication::translate("spoton_mainwindow", "Iteration &Count", 0));
        groupBox_13->setTitle(QApplication::translate("spoton_mainwindow", "Import Information", 0));
        importCredentialsLabel->setText(QApplication::translate("spoton_mainwindow", "Import credentials have not been set.", 0));
        label_118->setText(QApplication::translate("spoton_mainwindow", "<html><head/><body><p>The INI path may reference the absolute path of the Dooble.ini file. On Unix systems, this file usually resides in ~/.dooble. On Windows systems, the Dooble.ini file usually resides in the directory that also houses the Dooble.exe file. The credentials are stored in an SQLite database. Please note that both Dooble and Spot-On must reference the same shared.db database.</p></body></html>", 0));
        label_107->setText(QApplication::translate("spoton_mainwindow", "&INI Path", 0));
        label_108->setText(QApplication::translate("spoton_mainwindow", "4", 0));
        selectUrlIni->setText(QApplication::translate("spoton_mainwindow", "Select...", 0));
        reloadIni->setText(QApplication::translate("spoton_mainwindow", "Reload", 0));
        label_109->setText(QApplication::translate("spoton_mainwindow", "&Cipher Type", 0));
        label_110->setText(QApplication::translate("spoton_mainwindow", "&Hash Type", 0));
        label_111->setText(QApplication::translate("spoton_mainwindow", "Iteration &Count", 0));
        label_113->setText(QApplication::translate("spoton_mainwindow", "P&assphrase", 0));
        label_116->setText(QApplication::translate("spoton_mainwindow", "&Hash (Hex)", 0));
        label_112->setText(QApplication::translate("spoton_mainwindow", "&Salt (Hex)", 0));
        label_114->setText(QApplication::translate("spoton_mainwindow", "5", 0));
#ifndef QT_NO_TOOLTIP
        verify->setToolTip(QApplication::translate("spoton_mainwindow", "<html><head/><body><p>Compute a salted hash of the provided passphrase and compare the result with the hash contained within the specified INI file.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        verify->setText(QApplication::translate("spoton_mainwindow", "Verify", 0));
        label_115->setText(QApplication::translate("spoton_mainwindow", "6", 0));
#ifndef QT_NO_TOOLTIP
        saveUrlCredentials->setToolTip(QApplication::translate("spoton_mainwindow", "<html><head/><body><p>Generate an encryption key and save the result along with relevant information.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        saveUrlCredentials->setText(QApplication::translate("spoton_mainwindow", "Save", 0));
        label_106->setText(QApplication::translate("spoton_mainwindow", "7", 0));
#ifndef QT_NO_TOOLTIP
        importUrls->setToolTip(QApplication::translate("spoton_mainwindow", "<html><head/><body><p>Import URL data from the shared.db database.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        importUrls->setText(QApplication::translate("spoton_mainwindow", "Import URLs", 0));
#ifndef QT_NO_TOOLTIP
        search->setToolTip(QApplication::translate("spoton_mainwindow", "Please provide complete keywords.", 0));
#endif // QT_NO_TOOLTIP
        discover->setText(QApplication::translate("spoton_mainwindow", "&Discover!", 0));
        url_pages->setText(QApplication::translate("spoton_mainwindow", "| 1 |", 0));
        tab->setTabText(tab->indexOf(tab_search), QString());
        tab->setTabToolTip(tab->indexOf(tab_search), QApplication::translate("spoton_mainwindow", "Web Search", 0));
        label_96->setText(QApplication::translate("spoton_mainwindow", "Activate Kernel", 0));
        label_29->setText(QApplication::translate("spoton_mainwindow", "&External IP Retrieval Interval", 0));
        guiExternalIpFetch->clear();
        guiExternalIpFetch->insertItems(0, QStringList()
         << QApplication::translate("spoton_mainwindow", "30 Seconds", 0)
         << QApplication::translate("spoton_mainwindow", "60 Seconds", 0)
         << QApplication::translate("spoton_mainwindow", "Never", 0)
        );
        label_60->setText(QApplication::translate("spoton_mainwindow", "&Secure Memory Pool Size", 0));
#ifndef QT_NO_TOOLTIP
        guiSecureMemoryPool->setToolTip(QApplication::translate("spoton_mainwindow", "<html><head/><body><p>Setting a value of zero will disable the secure memory pool. Please restart the kernel upon changes.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        label_40->setText(QApplication::translate("spoton_mainwindow", "&GeoIP Data Path IPv4", 0));
        selectGeoIP4->setText(QApplication::translate("spoton_mainwindow", "Select...", 0));
        label_81->setText(QApplication::translate("spoton_mainwindow", "&GeoIP Data Path IPv6", 0));
        selectGeoIP6->setText(QApplication::translate("spoton_mainwindow", "Select...", 0));
        label_43->setText(QApplication::translate("spoton_mainwindow", "&SSL Control String", 0));
        sslControlString->setText(QApplication::translate("spoton_mainwindow", "HIGH:!aNULL:!eNULL:!3DES:!EXPORT:!SSLv3:@STRENGTH", 0));
        saveSslControlString->setText(QApplication::translate("spoton_mainwindow", "Save", 0));
#ifndef QT_NO_TOOLTIP
        testSslControlString->setToolTip(QApplication::translate("spoton_mainwindow", "Display a list of ciphers produced by the provided SSL Control String.", 0));
#endif // QT_NO_TOOLTIP
        testSslControlString->setText(QApplication::translate("spoton_mainwindow", "Test...", 0));
        kernelBox->setTitle(QApplication::translate("spoton_mainwindow", "Kernel", 0));
        label_67->setText(QApplication::translate("spoton_mainwindow", "&External IP Retrieval Interval", 0));
        kernelExternalIpFetch->clear();
        kernelExternalIpFetch->insertItems(0, QStringList()
         << QApplication::translate("spoton_mainwindow", "30 Seconds", 0)
         << QApplication::translate("spoton_mainwindow", "60 Seconds", 0)
         << QApplication::translate("spoton_mainwindow", "Never", 0)
        );
        label_68->setText(QApplication::translate("spoton_mainwindow", "&Secure Memory Pool Size", 0));
#ifndef QT_NO_TOOLTIP
        kernelSecureMemoryPool->setToolTip(QApplication::translate("spoton_mainwindow", "<html><head/><body><p>Setting a value of zero will disable the secure memory pool. Changes cannot be immediate. Some non-zero minimum will be imposed. The current recommended value is 262144.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        kernelPathLabel->setText(QApplication::translate("spoton_mainwindow", "Spot-On-Kernel &Executable Path", 0));
        selectKernelPath->setText(QApplication::translate("spoton_mainwindow", "Select...", 0));
        activateKernel->setText(QApplication::translate("spoton_mainwindow", "Activate", 0));
        label_17->setText(QApplication::translate("spoton_mainwindow", "PID", 0));
#ifndef QT_NO_TOOLTIP
        pid->setToolTip(QApplication::translate("spoton_mainwindow", "If PID is -1, please verify that libspoton is current.", 0));
#endif // QT_NO_TOOLTIP
        pid->setText(QApplication::translate("spoton_mainwindow", "0", 0));
        deactivateKernel->setText(QApplication::translate("spoton_mainwindow", "Deactivate", 0));
        label_42->setText(QApplication::translate("spoton_mainwindow", "&Cipher Type", 0));
        label_87->setText(QApplication::translate("spoton_mainwindow", "&Hash Type", 0));
        label_73->setText(QApplication::translate("spoton_mainwindow", "&Congestion Cost", 0));
#ifndef QT_NO_TOOLTIP
        cost->setToolTip(QApplication::translate("spoton_mainwindow", "The congestion cost applies to volatile memory only.", 0));
#endif // QT_NO_TOOLTIP
        label_124->setText(QApplication::translate("spoton_mainwindow", "Congestion &Algorithm", 0));
#ifndef QT_NO_TOOLTIP
        secondary_storage->setToolTip(QApplication::translate("spoton_mainwindow", "<html><head/><body><p>If enabled, packet digests will be stored in non-volatile memory. Please consider increasing the Kernel Cache Object Lifetime value in the Time page of the Options window.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        secondary_storage->setText(QApplication::translate("spoton_mainwindow", "&Secondary Storage", 0));
        kernelLogEvents->setText(QApplication::translate("spoton_mainwindow", "&Log Events", 0));
        label_34->setText(QApplication::translate("spoton_mainwindow", "&SSL Key Size", 0));
        kernelKeySize->clear();
        kernelKeySize->insertItems(0, QStringList()
         << QApplication::translate("spoton_mainwindow", "2048", 0)
         << QApplication::translate("spoton_mainwindow", "3072", 0)
         << QApplication::translate("spoton_mainwindow", "4096", 0)
        );
        passphraseGroupBox->setTitle(QApplication::translate("spoton_mainwindow", "Passphrase", 0));
        question_rb->setText(QApplication::translate("spoton_mainwindow", "&Question/Answer", 0));
        label_58->setText(QApplication::translate("spoton_mainwindow", "Minimum of 16 characters.", 0));
        passphrase_rb->setText(QApplication::translate("spoton_mainwindow", "P&assphrase", 0));
        label_74->setText(QApplication::translate("spoton_mainwindow", "&Name", 0));
        label_18->setText(QString());
        label_55->setText(QApplication::translate("spoton_mainwindow", "P&assphrase", 0));
        label_56->setText(QApplication::translate("spoton_mainwindow", "P&assphrase Confirmation", 0));
        label_97->setText(QApplication::translate("spoton_mainwindow", "&Question", 0));
        label_98->setText(QApplication::translate("spoton_mainwindow", "&Answer", 0));
        label->setText(QApplication::translate("spoton_mainwindow", "&Cipher Type", 0));
        label_14->setText(QApplication::translate("spoton_mainwindow", "&Hash Type", 0));
        label_15->setText(QApplication::translate("spoton_mainwindow", "Iteration &Count", 0));
        label_16->setText(QApplication::translate("spoton_mainwindow", "Salt &Length", 0));
        setPassphrase->setText(QApplication::translate("spoton_mainwindow", "Save", 0));
        publicKeysBox->setTitle(QApplication::translate("spoton_mainwindow", "Public Keys", 0));
        QTableWidgetItem *___qtablewidgetitem103 = personal_public_keys->horizontalHeaderItem(0);
        ___qtablewidgetitem103->setText(QApplication::translate("spoton_mainwindow", "Key Type", 0));
        QTableWidgetItem *___qtablewidgetitem104 = personal_public_keys->horizontalHeaderItem(1);
        ___qtablewidgetitem104->setText(QApplication::translate("spoton_mainwindow", "Algorithm", 0));
        QTableWidgetItem *___qtablewidgetitem105 = personal_public_keys->horizontalHeaderItem(2);
        ___qtablewidgetitem105->setText(QApplication::translate("spoton_mainwindow", "Size", 0));
        QTableWidgetItem *___qtablewidgetitem106 = personal_public_keys->horizontalHeaderItem(3);
        ___qtablewidgetitem106->setText(QApplication::translate("spoton_mainwindow", "SHA-512 Hash", 0));
        QTableWidgetItem *___qtablewidgetitem107 = personal_public_keys->horizontalHeaderItem(4);
        ___qtablewidgetitem107->setText(QApplication::translate("spoton_mainwindow", "Base-64", 0));
        label_92->setText(QApplication::translate("spoton_mainwindow", "&Key Size", 0));
        encryptionKeySize->clear();
        encryptionKeySize->insertItems(0, QStringList()
         << QApplication::translate("spoton_mainwindow", "3072", 0)
         << QApplication::translate("spoton_mainwindow", "4096", 0)
         << QApplication::translate("spoton_mainwindow", "7680", 0)
         << QApplication::translate("spoton_mainwindow", "8192", 0)
         << QApplication::translate("spoton_mainwindow", "15360", 0)
        );
        signatureKeyType->clear();
        signatureKeyType->insertItems(0, QStringList()
         << QApplication::translate("spoton_mainwindow", "DSA", 0)
         << QApplication::translate("spoton_mainwindow", "ECDSA", 0)
         << QApplication::translate("spoton_mainwindow", "EdDSA", 0)
         << QApplication::translate("spoton_mainwindow", "ElGamal", 0)
         << QApplication::translate("spoton_mainwindow", "RSA", 0)
        );
        signatureKeySize->clear();
        signatureKeySize->insertItems(0, QStringList()
         << QApplication::translate("spoton_mainwindow", "3072", 0)
         << QApplication::translate("spoton_mainwindow", "4096", 0)
         << QApplication::translate("spoton_mainwindow", "7680", 0)
         << QApplication::translate("spoton_mainwindow", "8192", 0)
         << QApplication::translate("spoton_mainwindow", "15360", 0)
        );
        label_46->setText(QApplication::translate("spoton_mainwindow", "&Signature", 0));
        label_69->setText(QApplication::translate("spoton_mainwindow", "Key &Type", 0));
        encryptionKeyType->clear();
        encryptionKeyType->insertItems(0, QStringList()
         << QApplication::translate("spoton_mainwindow", "ElGamal", 0)
         << QApplication::translate("spoton_mainwindow", "McEliece", 0)
         << QApplication::translate("spoton_mainwindow", "NTRU", 0)
         << QApplication::translate("spoton_mainwindow", "RSA", 0)
        );
        label_45->setText(QApplication::translate("spoton_mainwindow", "&Encryption", 0));
        regenerate->setText(QApplication::translate("spoton_mainwindow", "Create", 0));
#ifndef QT_NO_TOOLTIP
        newKeys->setToolTip(QApplication::translate("spoton_mainwindow", "If checked, new key pairs will be generated whenever the passphrase or question/answer is/are updated.", 0));
#endif // QT_NO_TOOLTIP
        newKeys->setText(QApplication::translate("spoton_mainwindow", "&Key Size", 0));
        delete_key->setText(QApplication::translate("spoton_mainwindow", "Delete", 0));
        showStatistics->setText(QApplication::translate("spoton_mainwindow", "Statistics", 0));
        statisticsBox->setTitle(QApplication::translate("spoton_mainwindow", "Statistics", 0));
        tab->setTabText(tab->indexOf(tab_settings), QString());
        tab->setTabToolTip(tab->indexOf(tab_settings), QApplication::translate("spoton_mainwindow", "Kernel Settings", 0));
        label_101->setText(QApplication::translate("spoton_mainwindow", "StarBeam File Sharing", 0));
#ifndef QT_NO_TOOLTIP
        magnetsActionMenu->setToolTip(QApplication::translate("spoton_mainwindow", "Context Menu", 0));
#endif // QT_NO_TOOLTIP
        magnetsActionMenu->setText(QApplication::translate("spoton_mainwindow", "Context Menu Reflection", 0));
        QTableWidgetItem *___qtablewidgetitem108 = etpMagnets->horizontalHeaderItem(0);
        ___qtablewidgetitem108->setText(QApplication::translate("spoton_mainwindow", "One-Time-Magnet", 0));
        QTableWidgetItem *___qtablewidgetitem109 = etpMagnets->horizontalHeaderItem(1);
        ___qtablewidgetitem109->setText(QApplication::translate("spoton_mainwindow", "Magnet", 0));
        QTableWidgetItem *___qtablewidgetitem110 = etpMagnets->horizontalHeaderItem(2);
        ___qtablewidgetitem110->setText(QApplication::translate("spoton_mainwindow", "OID", 0));
        magnetRadio->setText(QApplication::translate("spoton_mainwindow", "&Add", 0));
        pairRadio->setText(QApplication::translate("spoton_mainwindow", "&Create", 0));
        generate->clear();
        generate->insertItems(0, QStringList()
         << QApplication::translate("spoton_mainwindow", "Clear", 0)
         << QApplication::translate("spoton_mainwindow", "Generate Key Pair", 0)
         << QApplication::translate("spoton_mainwindow", "Generate Encryption Key", 0)
         << QApplication::translate("spoton_mainwindow", "Generate MAC Key", 0)
        );
        label_52->setText(QApplication::translate("spoton_mainwindow", "&Cipher Type", 0));
        label_51->setText(QApplication::translate("spoton_mainwindow", "Hash &Key", 0));
        label_50->setText(QApplication::translate("spoton_mainwindow", "Encryption &Key", 0));
        label_57->setText(QApplication::translate("spoton_mainwindow", "&Hash Type", 0));
        addMagnet->setText(QApplication::translate("spoton_mainwindow", "Add", 0));
        groupBox_8->setTitle(QApplication::translate("spoton_mainwindow", "Add Novas for incoming files.", 0));
        label_90->setText(QApplication::translate("spoton_mainwindow", "Novas must contain at least forty-eight characters.", 0));
        addNova->setText(QApplication::translate("spoton_mainwindow", "Add", 0));
        deleteNova->setText(QApplication::translate("spoton_mainwindow", "Delete", 0));
        etpTab->setTabText(etpTab->indexOf(tab_SB_Magnets), QApplication::translate("spoton_mainwindow", "&Magnet-URI", 0));
        receivers->setTitle(QApplication::translate("spoton_mainwindow", "&Received", 0));
        QTableWidgetItem *___qtablewidgetitem111 = received->horizontalHeaderItem(0);
        ___qtablewidgetitem111->setText(QApplication::translate("spoton_mainwindow", "Locked", 0));
        QTableWidgetItem *___qtablewidgetitem112 = received->horizontalHeaderItem(1);
        ___qtablewidgetitem112->setText(QApplication::translate("spoton_mainwindow", "Percent Received", 0));
        QTableWidgetItem *___qtablewidgetitem113 = received->horizontalHeaderItem(2);
        ___qtablewidgetitem113->setText(QApplication::translate("spoton_mainwindow", "Pulse Size", 0));
        QTableWidgetItem *___qtablewidgetitem114 = received->horizontalHeaderItem(3);
        ___qtablewidgetitem114->setText(QApplication::translate("spoton_mainwindow", "Total Size", 0));
        QTableWidgetItem *___qtablewidgetitem115 = received->horizontalHeaderItem(4);
        ___qtablewidgetitem115->setText(QApplication::translate("spoton_mainwindow", "File", 0));
        QTableWidgetItem *___qtablewidgetitem116 = received->horizontalHeaderItem(5);
        ___qtablewidgetitem116->setText(QApplication::translate("spoton_mainwindow", "Computed SHA-1 Hash", 0));
        QTableWidgetItem *___qtablewidgetitem117 = received->horizontalHeaderItem(6);
        ___qtablewidgetitem117->setText(QApplication::translate("spoton_mainwindow", "Expected SHA-1 Hash", 0));
        QTableWidgetItem *___qtablewidgetitem118 = received->horizontalHeaderItem(7);
        ___qtablewidgetitem118->setText(QApplication::translate("spoton_mainwindow", "OID", 0));
        label_63->setText(QApplication::translate("spoton_mainwindow", "&Destination Folder", 0));
        etpSelectDestination->setText(QApplication::translate("spoton_mainwindow", "Select...", 0));
#ifndef QT_NO_TOOLTIP
        receivedActionMenu->setToolTip(QApplication::translate("spoton_mainwindow", "Context Menu", 0));
#endif // QT_NO_TOOLTIP
        receivedActionMenu->setText(QApplication::translate("spoton_mainwindow", "Context Menu Reflection", 0));
        label_59->setText(QApplication::translate("spoton_mainwindow", "&Maximum Mosaic Size", 0));
        etpMaxMosaicSize->setSuffix(QApplication::translate("spoton_mainwindow", " MiB", 0));
        label_117->setText(QApplication::translate("spoton_mainwindow", "<html><head/><body><p>A lock request may not be immediate because of the asynchronous nature of Spot-On. If a file is locked, its write permissions will be revoked.</p></body></html>", 0));
        etpTab->setTabText(etpTab->indexOf(tab_SB_incoming), QApplication::translate("spoton_mainwindow", "&Received", 0));
        groupBox_9->setTitle(QApplication::translate("spoton_mainwindow", "Transmit", 0));
        label_91->setText(QApplication::translate("spoton_mainwindow", "Select a file, choose magnet(s) and press Transmit.", 0));
        label_53->setText(QApplication::translate("spoton_mainwindow", "&File", 0));
#ifndef QT_NO_TOOLTIP
        etpSelectFile->setToolTip(QApplication::translate("spoton_mainwindow", "Select a file.", 0));
#endif // QT_NO_TOOLTIP
        etpSelectFile->setText(QApplication::translate("spoton_mainwindow", "Select...", 0));
        QTableWidgetItem *___qtablewidgetitem119 = addTransmittedMagnets->horizontalHeaderItem(0);
        ___qtablewidgetitem119->setText(QApplication::translate("spoton_mainwindow", "SB Magnet", 0));
        QTableWidgetItem *___qtablewidgetitem120 = addTransmittedMagnets->horizontalHeaderItem(1);
        ___qtablewidgetitem120->setText(QApplication::translate("spoton_mainwindow", "OID", 0));
#ifndef QT_NO_TOOLTIP
        addTransmittedMagnets->setToolTip(QApplication::translate("spoton_mainwindow", "Available magnets.", 0));
#endif // QT_NO_TOOLTIP
        label_126->setText(QApplication::translate("spoton_mainwindow", "Optional: Create a Nova password for your file.", 0));
#ifndef QT_NO_TOOLTIP
        generateNova->setToolTip(QApplication::translate("spoton_mainwindow", "<html><head/><body><p>Bundle each pulse with an additional layer of AES-256 encryption. Do remember to notify all recipients of the keys that you created for this transfer magnet.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        generateNova->setText(QApplication::translate("spoton_mainwindow", "Create NOVA", 0));
        label_54->setText(QApplication::translate("spoton_mainwindow", "Chunk Size", 0));
        pulseSize->setSuffix(QApplication::translate("spoton_mainwindow", " Bytes", 0));
#ifndef QT_NO_TOOLTIP
        fragment_starbeam->setToolTip(QApplication::translate("spoton_mainwindow", "<html><head/><body><p>Fragmented StarBeams allow for the fragmentation of a mosaic (file) into a number of N unique pulses, where N is the number of active network connections. The standard StarBeam transfers a particular pulse over each network connection.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        fragment_starbeam->setText(QApplication::translate("spoton_mainwindow", "&Fragment", 0));
#ifndef QT_NO_TOOLTIP
        missingLinksCheckBox->setToolTip(QApplication::translate("spoton_mainwindow", "<html><head/><body><p>Tools: StarBeam Analyzer. It allows to check if you received all links for a mosaic. If not, send your friend the &quot;missing links magnet&quot; and they will transfer only the missing links of the file. The hash comparison with your friend allows you to check if you have the same file.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        missingLinksCheckBox->setText(QApplication::translate("spoton_mainwindow", "&Missing Links Magnet", 0));
        demagnetizeMissingLinks->setText(QApplication::translate("spoton_mainwindow", "Demagnetize", 0));
        transmit->setText(QApplication::translate("spoton_mainwindow", "Transmit", 0));
        QTableWidgetItem *___qtablewidgetitem121 = transmitted->horizontalHeaderItem(0);
        ___qtablewidgetitem121->setText(QApplication::translate("spoton_mainwindow", "Paused", 0));
        QTableWidgetItem *___qtablewidgetitem122 = transmitted->horizontalHeaderItem(1);
        ___qtablewidgetitem122->setText(QApplication::translate("spoton_mainwindow", "Percent Transmitted", 0));
        QTableWidgetItem *___qtablewidgetitem123 = transmitted->horizontalHeaderItem(2);
        ___qtablewidgetitem123->setText(QApplication::translate("spoton_mainwindow", "Chunk Size", 0));
        QTableWidgetItem *___qtablewidgetitem124 = transmitted->horizontalHeaderItem(3);
        ___qtablewidgetitem124->setText(QApplication::translate("spoton_mainwindow", "Total Size", 0));
        QTableWidgetItem *___qtablewidgetitem125 = transmitted->horizontalHeaderItem(4);
        ___qtablewidgetitem125->setText(QApplication::translate("spoton_mainwindow", "Status", 0));
        QTableWidgetItem *___qtablewidgetitem126 = transmitted->horizontalHeaderItem(5);
        ___qtablewidgetitem126->setText(QApplication::translate("spoton_mainwindow", "File", 0));
        QTableWidgetItem *___qtablewidgetitem127 = transmitted->horizontalHeaderItem(6);
        ___qtablewidgetitem127->setText(QApplication::translate("spoton_mainwindow", "Mosaic", 0));
        QTableWidgetItem *___qtablewidgetitem128 = transmitted->horizontalHeaderItem(7);
        ___qtablewidgetitem128->setText(QApplication::translate("spoton_mainwindow", "SHA-1 Hash", 0));
        QTableWidgetItem *___qtablewidgetitem129 = transmitted->horizontalHeaderItem(8);
        ___qtablewidgetitem129->setText(QApplication::translate("spoton_mainwindow", "Read Interval", 0));
        QTableWidgetItem *___qtablewidgetitem130 = transmitted->horizontalHeaderItem(9);
        ___qtablewidgetitem130->setText(QApplication::translate("spoton_mainwindow", "OID", 0));
#ifndef QT_NO_TOOLTIP
        transmitted->setToolTip(QApplication::translate("spoton_mainwindow", "<html><head/><body><p>Uploads. Please uncheck &quot;paused&quot; after you have copied and sent the magnet(s) to your receiving friend(s).</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        transmittedActionMenu->setToolTip(QApplication::translate("spoton_mainwindow", "Right-mouse context menu as a button for tablets.", 0));
#endif // QT_NO_TOOLTIP
        transmittedActionMenu->setText(QApplication::translate("spoton_mainwindow", "Copy SB-Magnet", 0));
        rewind->setText(QApplication::translate("spoton_mainwindow", "Rewind && Transmit Again", 0));
        etpTab->setTabText(etpTab->indexOf(tab_SB_Upload), QApplication::translate("spoton_mainwindow", "&Transmitted", 0));
        tab->setTabText(tab->indexOf(tab_starbeam), QString());
        tab->setTabToolTip(tab->indexOf(tab_starbeam), QApplication::translate("spoton_mainwindow", "StarBeam File Transfer", 0));
        label_121->setText(QApplication::translate("spoton_mainwindow", "URL Options", 0));
        activeUrlDistribution->setText(QApplication::translate("spoton_mainwindow", "&Active", 0));
        label_104->setText(QApplication::translate("spoton_mainwindow", "&Distribution Model", 0));
        urlDistributionModel->clear();
        urlDistributionModel->insertItems(0, QStringList()
         << QApplication::translate("spoton_mainwindow", "Linear", 0)
        );
        groupBox_2->setTitle(QApplication::translate("spoton_mainwindow", "Participants", 0));
#ifndef QT_NO_TOOLTIP
        urlActionMenu->setToolTip(QApplication::translate("spoton_mainwindow", "Context Menu", 0));
#endif // QT_NO_TOOLTIP
        urlActionMenu->setText(QApplication::translate("spoton_mainwindow", "Context Menu Reflection", 0));
        label_22->setText(QApplication::translate("spoton_mainwindow", "&Name", 0));
        saveUrlName->setText(QApplication::translate("spoton_mainwindow", "Save", 0));
        QTableWidgetItem *___qtablewidgetitem131 = urlParticipants->horizontalHeaderItem(0);
        ___qtablewidgetitem131->setText(QApplication::translate("spoton_mainwindow", "Participant", 0));
        QTableWidgetItem *___qtablewidgetitem132 = urlParticipants->horizontalHeaderItem(1);
        ___qtablewidgetitem132->setText(QApplication::translate("spoton_mainwindow", "OID", 0));
        QTableWidgetItem *___qtablewidgetitem133 = urlParticipants->horizontalHeaderItem(2);
        ___qtablewidgetitem133->setText(QApplication::translate("spoton_mainwindow", "neighbor_oid", 0));
        QTableWidgetItem *___qtablewidgetitem134 = urlParticipants->horizontalHeaderItem(3);
        ___qtablewidgetitem134->setText(QApplication::translate("spoton_mainwindow", "public_key_hash", 0));
        urlPolarizers->setTitle(QApplication::translate("spoton_mainwindow", "URL Distillers", 0));
        label_9->setText(QApplication::translate("spoton_mainwindow", "Acceptable examples: ftp:, gopher:, http:, https:, https://www.nasa.gov, etc.", 0));
        QTableWidgetItem *___qtablewidgetitem135 = downDistillers->horizontalHeaderItem(0);
        ___qtablewidgetitem135->setText(QApplication::translate("spoton_mainwindow", "Domain", 0));
        QTableWidgetItem *___qtablewidgetitem136 = downDistillers->horizontalHeaderItem(1);
        ___qtablewidgetitem136->setText(QApplication::translate("spoton_mainwindow", "Type", 0));
        urlTab->setTabText(urlTab->indexOf(tab_2), QApplication::translate("spoton_mainwindow", "&Download", 0));
        QTableWidgetItem *___qtablewidgetitem137 = sharedDistillers->horizontalHeaderItem(0);
        ___qtablewidgetitem137->setText(QApplication::translate("spoton_mainwindow", "Domain", 0));
        QTableWidgetItem *___qtablewidgetitem138 = sharedDistillers->horizontalHeaderItem(1);
        ___qtablewidgetitem138->setText(QApplication::translate("spoton_mainwindow", "Type", 0));
        urlTab->setTabText(urlTab->indexOf(tab_5), QApplication::translate("spoton_mainwindow", "&Import", 0));
        QTableWidgetItem *___qtablewidgetitem139 = upDistillers->horizontalHeaderItem(0);
        ___qtablewidgetitem139->setText(QApplication::translate("spoton_mainwindow", "Domain", 0));
        QTableWidgetItem *___qtablewidgetitem140 = upDistillers->horizontalHeaderItem(1);
        ___qtablewidgetitem140->setText(QApplication::translate("spoton_mainwindow", "Type", 0));
        urlTab->setTabText(urlTab->indexOf(tab_3), QApplication::translate("spoton_mainwindow", "&Upload", 0));
        label_99->setText(QApplication::translate("spoton_mainwindow", "&Add Domain", 0));
        downDist->setText(QApplication::translate("spoton_mainwindow", "&Download", 0));
        sharedDist->setText(QApplication::translate("spoton_mainwindow", "&Import", 0));
        upDist->setText(QApplication::translate("spoton_mainwindow", "&Upload", 0));
        addDistiller->setText(QApplication::translate("spoton_mainwindow", "Add", 0));
        deleteDistillers->setText(QApplication::translate("spoton_mainwindow", "Delete", 0));
        refreshDistillers->setText(QApplication::translate("spoton_mainwindow", "Refresh", 0));
        tab->setTabText(tab->indexOf(tab_cultivation), QString());
        tab->setTabToolTip(tab->indexOf(tab_cultivation), QApplication::translate("spoton_mainwindow", "URL Settings", 0));
        label_125->setText(QApplication::translate("spoton_mainwindow", "Add Friend", 0));
        groupBox_addkey_3->setTitle(QApplication::translate("spoton_mainwindow", "Add Friend-Key", 0));
#ifndef QT_NO_TOOLTIP
        toolButtonCopyToClipboard->setToolTip(QApplication::translate("spoton_mainwindow", "Copy your public key pairs to the clipboard buffer.", 0));
#endif // QT_NO_TOOLTIP
        toolButtonCopyToClipboard->setText(QApplication::translate("spoton_mainwindow", "Copy Own Public Keys", 0));
        addFriendEmail->setText(QApplication::translate("spoton_mainwindow", "&E-Mail Address", 0));
        addFriendPublicKeyRadio->setText(QApplication::translate("spoton_mainwindow", "&Key", 0));
        friendInformation->setHtml(QApplication::translate("spoton_mainwindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:8pt;\"><br /></p></body></html>", 0));
#ifndef QT_NO_TOOLTIP
        addFriend->setToolTip(QApplication::translate("spoton_mainwindow", "<html><head/><body><p>Add the key(s) of your friend.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        addFriend->setText(QApplication::translate("spoton_mainwindow", "Add", 0));
#ifndef QT_NO_TOOLTIP
        clearFriend->setToolTip(QApplication::translate("spoton_mainwindow", "Clear", 0));
#endif // QT_NO_TOOLTIP
        clearFriend->setText(QString());
        tab->setTabText(tab->indexOf(tab_addkey), QString());
        tab->setTabToolTip(tab->indexOf(tab_addkey), QApplication::translate("spoton_mainwindow", "Add Friend", 0));
#ifndef QT_NO_TOOLTIP
        logo->setToolTip(QApplication::translate("spoton_mainwindow", "<html><head/><body><p>GoldBug logo uses the <b>Neuland </b>font: &quot;Neuland is a German typeface that was designed in 1923 by Rudolf Koch. It is often used today when an \342\200\234exotic\342\200\235 or \342\200\234primitive\342\200\235 look is desired, such as the logos for the Jurassic Park films. &quot; - Wikipedia.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        logo->setText(QString());
        label_31->setText(QApplication::translate("spoton_mainwindow", "Your Instant Definition in Decentralized Crypto.", 0));
        label_100->setText(QApplication::translate("spoton_mainwindow", "<html><head/><body><p><a href=\"http://goldbug.sourceforge.net\"><span style=\" text-decoration: none; color: black;\">http://goldbug.sf.net</span></a></p></body></html>", 0));
        question_rb_authenticate->setText(QApplication::translate("spoton_mainwindow", "&Question-Method", 0));
        label_102->setText(QApplication::translate("spoton_mainwindow", "or", 0));
        passphrase_rb_authenticate->setText(QApplication::translate("spoton_mainwindow", "P&assphrase-Method", 0));
        passphraseLabel->setText(QApplication::translate("spoton_mainwindow", "Please enter your", 0));
        label_103gb->setText(QApplication::translate("spoton_mainwindow", "&Question", 0));
        label_124gb->setText(QApplication::translate("spoton_mainwindow", "P&assphrase", 0));
        label_122gb->setText(QApplication::translate("spoton_mainwindow", "&Answer", 0));
        label_103->setText(QApplication::translate("spoton_mainwindow", "Double-click to launch the Virtual Keyboard.", 0));
        passphraseButton->setText(QApplication::translate("spoton_mainwindow", "Login", 0));
#ifndef QT_NO_TOOLTIP
        version->setToolTip(QApplication::translate("spoton_mainwindow", "<html><head/><body><p align=\"center\">A minimalistic <br/>desktop messenger GUI<br/>for the messaging library of<br/>http://spot-on.sf.net.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        buildInformation->setText(QApplication::translate("spoton_mainwindow", "TextLabel", 0));
        tab->setTabText(tab->indexOf(tab_login), QString());
        tab->setTabToolTip(tab->indexOf(tab_login), QApplication::translate("spoton_mainwindow", "Login", 0));
        menu_File->setTitle(QApplication::translate("spoton_mainwindow", "&File", 0));
        menu_View->setTitle(QApplication::translate("spoton_mainwindow", "&View", 0));
        menu_Pages->setTitle(QApplication::translate("spoton_mainwindow", "&Pages", 0));
        menu_Tools->setTitle(QApplication::translate("spoton_mainwindow", "&Tools", 0));
        menu_Edit->setTitle(QApplication::translate("spoton_mainwindow", "&Edit", 0));
        Q_UNUSED(spoton_mainwindow);
    } // retranslateUi

};

namespace Ui {
    class spoton_mainwindow: public Ui_spoton_mainwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPOT_2D_ON_2D_CONTROLCENTER_H
